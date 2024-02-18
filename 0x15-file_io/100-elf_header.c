#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 64

/**
 * print_error - Print error message to stderr and exit
 * @message: The error message to print
 */
void print_error(char *message)
{
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(98);
}

/**
 * print_elf_header_info - Print ELF header information
 * @ehdr: Pointer to ELF header structure
 */
void print_elf_header_info(Elf64_Ehdr *ehdr)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", ehdr->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
    printf("  Class:                             %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
                                                        ehdr->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
                                                        ehdr->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" : "<unknown>");
    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (ehdr->e_type)
    {
        case ET_NONE:
            printf("NONE (Unknown type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown>\n");
            break;
    }
    printf("  Entry point address:               %#lx\n", ehdr->e_entry);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr ehdr;

    if (argc != 2)
        print_error("Usage: elf_header elf_filename");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        print_error("Error: Cannot read file");

    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
        print_error("Error: Cannot read ELF header");

    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
        ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
        ehdr.e_ident[EI_MAG3] != ELFMAG3)
        print_error("Error: Not an ELF file");

    print_elf_header_info(&ehdr);

    if (close(fd) == -1)
        print_error("Error: Cannot close file");

    return (0);
}

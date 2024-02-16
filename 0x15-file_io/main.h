#ifndef __HEADER__
#define __HEADER__
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *make_buffer(char *file);
void close_fd(int fd);
#endif

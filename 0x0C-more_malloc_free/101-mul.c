#include <stdio.h>
#include <stdlib.h>

int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

void print_error(void)
{
    printf("Error\n");
    exit(98);
}

void multiply(const char *num1, const char *num2)
{
    int len1 = 0, len2 = 0, i, j;
    int *result;

    while (num1[len1])
    {
        if (!_isdigit(num1[len1]))
            print_error();
        len1++;
    }
    while (num2[len2])
    {
        if (!_isdigit(num2[len2]))
            print_error();
        len2++;
    }

    result = calloc(len1 + len2, sizeof(int));
    if (result == NULL)
        print_error();

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int sum = result[i + j + 1] + (digit1 * digit2);

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    i = 0;
    while (result[i] == 0 && i < len1 + len2 - 1)
        i++;

    for (; i < len1 + len2; i++)
        printf("%d", result[i]);
    printf("\n");

    free(result);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        print_error();

    multiply(argv[1], argv[2]);

    return 0;
}

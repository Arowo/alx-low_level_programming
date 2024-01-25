#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator
 * @n: n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *p;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		p = va_arg(list, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	putchar('\n');
	va_end(list);
}

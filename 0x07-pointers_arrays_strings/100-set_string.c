#include "main.h"
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char.
 * @s: s
 * @to: to
 */
void set_string(char **s, char *to)
{
	*s = to;
}

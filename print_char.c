#include "main.h"


/**
 * print_char - Use _putchar to print va_args char
 * @data: source list to print
 *
 * Return: Number of char
 */
int print_char(va_list data)
{
	int count = 1;
	char c = va_arg(data, int);

	if (c == 0)					/* If 0 */
		return (count);				/* Count 1 for the NULL termination */

	_putchar(c);

	return (count);
}

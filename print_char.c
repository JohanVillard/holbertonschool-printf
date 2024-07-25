#include "main.h"

/**
 * print_char - Use _putchar to print va_args character
 * @data: List from which to extract the next argument
 *
 * Return: Number of bytes printed.(Always 1)
 */
int print_char(va_list data)
{
	int count = 1;
	char c = va_arg(data, int);

	if (c == '\0')					/* If 0 */
		return (1);					/* Count 1 for the NULL termination */

	_putchar(c);

	return (count);
}

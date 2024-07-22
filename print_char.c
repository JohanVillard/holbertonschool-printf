#include "main.h"


/**
 * print_char - Use _putchar to print va_args char
 * @data: source list to print
 *
 * Return: Number of char
 */
int print_char(va_list data)
{
	_putchar(va_arg(data, int));

	return (0);
}

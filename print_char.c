#include "main.h"


/**
 * print_char - Use _putchar to print va_args char
 * @data: source list to print
 * @buffer: Array to store char
 * @i_buffer: Index of buffer
 *
 * Return: Number of char stored
 */
int print_char(va_list data, char *buffer, int *i_buffer)
{
	int count = 1;
	char c = va_arg(data, int);

	if (data == NULL)				/* If 0 */
		return (0);					/* Count 1 for the NULL termination */

	buffer[*i_buffer] = c;			/* Store the char */
	(*i_buffer)++;

	return (count);
}

#include "main.h"

/**
 * print_char - Use _putchar to print va_args character
 * @data: List from which to extract the next argument
 * @buffer: Array to store char
 * @i_buffer: Index of buffer
 * @flag: unused
 *
 * Return: Number of bytes stored.(Always 1)
 */
int print_char(va_list data, char *buffer, int *i_buffer,
	char *flag __attribute__((unused)), char *length __attribute__((unused)))
{
	int count = 0;
	char c = va_arg(data, int);

	if (data == NULL)					/* If 0 */
		return (0);					/* Count 1 for the NULL termination */

	buffer[*i_buffer] = c;			/* Store the char */
	count += flush_buffer(buffer, i_buffer);

	return (count);
}

#include "main.h"

/**
 * print_flag_plus_space - Store space or plus sign
 * @buffer: Array to store char
 * @i_buffer: Index of buffer
 * @flag: unused
 *
 * This function store a space or plus sign char when detected as a flag.
 *
 * Return: Number of bytes printed. (Always 1)
 */
int print_flag_plus_space(char *buffer, int *i_buffer, char *flag)
{
	int count = 0;

	if (*flag == ' ')
	{
		buffer[*i_buffer] = ' ';					/* Print 0 */
		count += flush_buffer(buffer, i_buffer);
	}
	else if (*flag == '+')
	{
		buffer[*i_buffer] = '+';					/* Print 0 */
		count += flush_buffer(buffer, i_buffer);
	}

	return (count);

}

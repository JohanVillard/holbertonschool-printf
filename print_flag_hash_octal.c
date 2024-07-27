#include "main.h"

/**
 * print_flag_hash_octal - Store 0 as a prefix
 * @buffer: Array to store charspace or plus sign char
 * @i_buffer: Index of buffer
 * @flag: unused
 *
 * This function store a 0 when # is detected as a flag.
 *
 * Return: Number of bytes printed. (Always 1)
 */
int print_flag_hash_octal(char *buffer, int *i_buffer,
	char *flag __attribute__((unused)))
{
	int count = 0;

	buffer[*i_buffer] = '0';					/* Print 0 */
	count += flush_buffer(buffer, i_buffer);

	return (count);
}

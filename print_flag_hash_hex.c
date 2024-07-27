#include "main.h"

/**
 * print_flag_hash_hex - Store 0 and x as a prefix
 * @buffer: Array to store charspace or plus sign char
 * @i_buffer: Index of buffer
 * @flag: unused
 *
 * This function store a 0 and a x when # is detected as a flag.
 *
 * Return: Number of bytes printed. (Always 1)
 */
int print_flag_hash_hex(char *buffer, int *i_buffer,
char *flag __attribute__((unused)))
{
	int count = 0;

	buffer[*i_buffer] = '0';					/* Print 0 */
	count += flush_buffer(buffer, i_buffer);
	buffer[*i_buffer] = 'x';
	count += flush_buffer(buffer, i_buffer);

	return (count);
}

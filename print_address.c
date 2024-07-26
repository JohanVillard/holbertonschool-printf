#include "main.h"
#include <stdint.h>

/**
 * print_address - Stores a 64 BITS memory address.
 * @data: List from which to extract the next argument.
 * @buffer: Array to store char.
 * @i_buffer: Index of buffer.
 *
 * Return: Number of bytes stored.
 */
int print_address(va_list data, char *buffer, int *i_buffer)
{
	int count = 0;
	uintptr_t address;

	buffer[*i_buffer] = '0';						/* Store the char */
	count += flush_buffer(buffer, i_buffer);
	buffer[*i_buffer] = 'x';						/* Store the char */
	count += flush_buffer(buffer, i_buffer);

	address = va_arg(data, unsigned long int);

	count += print_hex(address, buffer, i_buffer);

	return (count);
}

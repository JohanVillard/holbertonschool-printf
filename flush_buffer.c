#include "main.h"

/**
 * flush_buffer - Print all the buffer and put his index to 0.
 * @buffer: Character array where formatted strings are stored.
 * @i_buffer: Index of buffer.
 *
 * Return: Nothing.
 */
void flush_buffer(char *buffer, int *i_buffer)
{
		write(1, buffer, *i_buffer);
		*i_buffer = 0;
}

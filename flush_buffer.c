#include "main.h"

/**
 * flush_buffer - Print all the buffer and put his index to 0 if full
 * or move i_buffer
 * @buffer: Character array where formatted strings are stored.
 * @i_buffer: Index of buffer.
 *
 * Return: Nothing.
 */
int flush_buffer(char *buffer, int *i_buffer)
{
	int count = 0;
	/* Buffer is full and new line */
	if (buffer[*i_buffer] == '\n' && *i_buffer == 1024)
	{
		write(1, buffer, *i_buffer);
		free(buffer);
		buffer = malloc(1024);
		*i_buffer = 0;										/* Reset */
	}
	else
		(*i_buffer)++;

	count++;

	return (count);
}

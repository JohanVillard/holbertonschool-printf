#include "main.h"

/**
 * flush_buffer - Print all the buffer and put his index to 0 if full
 * or move i_buffer
 * @buffer: Character array where formatted strings are stored.
 * @i_buffer: Index of buffer.
 *
 * Return: Nothing.
 */
void flush_buffer(char *buffer, int *i_buffer)
{
		if (*i_buffer == 1024 || buffer[*i_buffer] == '\n')				/* Buffer is full */
																		/* or new line */
		{
			write(1, buffer, *i_buffer);
			*i_buffer = 0;					/* Reset */
		}
		else
			(*i_buffer)++;
}

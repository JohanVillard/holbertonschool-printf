#include "main.h"

/**
 * print_percent - Print percent when % before
 * @data: List from which to extract the next argument.
 * It is unused in this function.
 * @buffer: Array to store char
 * @i_buffer: Index of buffer
 *
 * This function print a percent char when two percent chars
 * are adjacent. --> %%
 *
 * Return: Number of bytes printed. (Always 1)
 */
int print_percent(va_list data __attribute__((unused)),
														char *buffer, int *i_buffer)
{
	int count = 1;						/* 1 char = 1 byte */

	buffer[*i_buffer] = '%';			/* Store the percentage char */
	flush_buffer(buffer, i_buffer);

	return (count);
}

#include "main.h"

/**
 * print_percent - Print percent when % before
 * @data: Extract percent char from va_list to print it.
 * @buffer: Array to store char
 * @i_buffer: Index of buffer
 *
 * This function print a percent char when two percent chars
 * are adjacent. --> %%
 *
 * Return: One which is the number of byte occupied by the percent char
 */
int print_percent(va_list data __attribute__((unused)),
														char *buffer, int *i_buffer)
{
	int count = 1;						/* 1 char = 1 byte */

	buffer[*i_buffer] = '%';			/* Store the percentage char */
	(*i_buffer)++;

	return (count);
}

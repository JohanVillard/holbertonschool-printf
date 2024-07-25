#include "main.h"

/**
 * print_percent - Print percent when % before
 * @data: List from which to extract the next argument.
 * It is unused in this function.
 *
 * This function print a percent char when two percent chars
 * are adjacent. --> %%
 *
 * Return: Number of bytes printed. (Always 1)
 */
int print_percent(va_list data __attribute__((unused)))
{
	int count = 1;						/* 1 char = 1 byte */

	_putchar('%');						/* Print the percentage char */

	return (count);
}

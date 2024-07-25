#include "main.h"

/**
* get_decimal - Get an integer from a va_list.
* @data: A va_list containing the integer to convert
* in decimal and to be printed
* @buffer: Array to store char
* @i_buffer: Index of buffer
*
* Description: This function extracts an integer from the provided va_list.
* then call print_decimal function that converts in decimal and print it.
*
* Return: Number of bytes printed.
*/
int get_decimal(va_list data, char *buffer, int *i_buffer)
{
	int count = 0;									/* Counter of bytes */
	unsigned int num = va_arg(data, unsigned int);	/* Extract the next data arg */

	count += print_decimal(num, buffer, i_buffer);	/* Convert and store */

	return (count);									/* Return Number of bytes */
}

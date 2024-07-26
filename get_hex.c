#include "main.h"

/**
* get_hex - Get an integer from a va_list and return the printed count
* @data: A va_list containing the integer to be converted to hexadecimal
* in lowercase and printed.
* @buffer: Array to store char
* @i_buffer: Index of buffer

* Description: This function extracts an integer from the provided va_list.
* then call print_hex function that converts in heX and print it.
*
* Return: Number of bytes printed.
*/
int get_hex(va_list data, char *buffer, int *i_buffer)
{
	int count = 0;									/* Counter of bytes */
	unsigned int num = va_arg(data, unsigned int);	/* Extract the next data arg */

	count += print_hex(num, buffer, i_buffer);		/* Convert and store */

	return (count);									/* Return Number of bytes */
}

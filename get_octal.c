#include "main.h"

/**
* get_octal - Get an integer from a va_list.
* @data: A va_list containing the integer to convert
* in octal and to be printed.
* @buffer: Array to store char
* @i_buffer: Index of buffer

* This function extracts an integer from the provided va_list.
* Then call print_int function that converts in octal and print it.
*
* Return: Return Number of bytes of number.
*/
int get_octal(va_list data, char *buffer, int *i_buffer)
{
	int count = 0;									/* Counter of bytes */
	unsigned int num = va_arg(data, unsigned int);	/* Extract the next arg*/

	count += print_octal(num, buffer, i_buffer);	/* Convert and store */

	return (count);									/* Return Number of bytes */
}

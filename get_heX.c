#include "main.h"

/**
* get_heX - Get an integer from a va_list.
* @data: A va_list containing the integer to convert in X and to be printed
* @buffer: Array to store char
* @i_buffer: Index of buffer
* @flag: apply if flag exist
*
* Description: This function extracts an integer from the provided va_list.
* then call print_heX function that converts in heX and print it.
*
* Return: Number of bytes printed.
*/
int get_heX(va_list data, char *buffer, int *i_buffer, char *flag)
{
	int count = 0;									/* Counter of bytes */
	unsigned int num = va_arg(data, unsigned int);	/* Extract the next data arg */

	if (*flag != '\0')
		count += print_flag_hash_heX(buffer, i_buffer, flag);

	count += print_heX(num, buffer, i_buffer);		/* Convert and store */

	return (count);									/* Return Number of bytes */
}

#include "main.h"

/**
* get_octal -  Get an integer from a va_list and return the printed count
* @data: A va_list containing the integer to convert
* in octal and to be printed.
* @buffer: Array to store char
* @i_buffer: Index of buffer
* @flag: apply if flag exist
* @length: length modifier
*
* Description: This function extracts an integer from the provided va_list.
* then call print_octal function that converts in octal and print it.
*
* Return: Number of bytes printed.
*/
int get_octal(va_list data, char *buffer,
	int *i_buffer, char *flag, char *length)
{
	int count = 0;									/* Counter of bytes */
	unsigned int num = 0;	/* Extract the next data arg */
	short int s_num = 0;
	long int l_num = 0;

	if (*flag != '\0' && num > 0)
		count += print_flag_hash_octal(buffer, i_buffer, flag);

	if (*length == 'h')
	{
		s_num = va_arg(data, unsigned int);
		count += print_short_octal(s_num, buffer, i_buffer);
		}
	else if (*length == 'l')
	{
		l_num = va_arg(data, unsigned long int);
		count += print_long_octal(l_num, buffer, i_buffer);
	}
	else
	{
		num = va_arg(data, unsigned int);
		count += print_octal(num, buffer, i_buffer);	/* Convert and store */
	}

	return (count);									/* Return Number of bytes */
}

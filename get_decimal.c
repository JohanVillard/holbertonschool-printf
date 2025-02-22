#include "main.h"

/**
* get_decimal - Get an integer from a va_list.
* @data: A va_list containing the integer to convert
* in decimal and to be printed
* @buffer: Array to store char
* @i_buffer: Index of buffer
* @flag: apply if flag exist
* @length: length modifier
*
* Description: This function extracts an integer from the provided va_list.
* then call print_decimal function that converts in decimal and print it.
*
* Return: Number of bytes printed.
*/
int get_decimal(va_list data, char *buffer, int *i_buffer,
	char *flag __attribute__((unused)), char *length)
{
	int count = 0;	/* Counter of bytes */
	unsigned int num;	/* Extract the next data arg */
	unsigned short int s_num = 0;
	unsigned long int l_num = 0;

	if (*length == 'h')
	{
		s_num = va_arg(data, unsigned int);
		count += print_short_decimal(s_num, buffer, i_buffer);
	}
	else if (*length == 'l')
	{
		l_num = va_arg(data, unsigned long int);
		count += print_long_decimal(l_num, buffer, i_buffer);
	}
	else
	{
		num = va_arg(data, unsigned int);
		count += print_decimal(num, buffer, i_buffer);	/* Convert and store */
	}

	return (count);	/* Return Number of bytes */
}

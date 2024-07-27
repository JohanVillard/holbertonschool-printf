#include "main.h"

/**
* get_hex - Get an integer from a va_list and return the printed count
* @data: A va_list containing the integer to be converted to hexadecimal
* in lowercase and printed.
* @buffer: Array to store char
* @i_buffer: Index of buffer
* @flag: apply if flag exist
* @length: length modifier
*
* Description: This function extracts an integer from the provided va_list.
* then call print_hex function that converts in heX and print it.
*
* Return: Number of bytes printed.
*/
int get_hex(va_list data, char *buffer,
	int *i_buffer, char *flag, char *length)
{
	int count = 0;									/* Counter of bytes */
	/* Extract the next data arg */
	unsigned long int num = va_arg(data, unsigned long int);
	short s_num = 0;
	long int l_num = 0;

	if (*flag != '\0' && num > 0)
		count += print_flag_hash_hex(buffer, i_buffer, flag);

	if (*length == 'h')
	{
		s_num = (short int)num;
		count += print_short_hex(s_num, buffer, i_buffer);
		}
	else if (*length == 'l')
	{
		l_num = (long int)num;
		count += print_long_hex(l_num, buffer, i_buffer);
	}
	else
	{
		count += print_hex(num, buffer, i_buffer);		/* Convert and store */
	}

	return (count);									/* Return Number of bytes */
}

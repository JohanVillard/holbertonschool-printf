#include "main.h"

/**
* get_int - Get an integer from a va_list.
* @data: A va_list containing the integer to be stored.
* @buffer: Array to store char
* @i_buffer: Index of buffer
* @flag: apply if flag exist
* @length: length modifier
*
* Description: This function extracts an integer from the provided va_list.
* then call print_int function to store it.
*
* Return: Number of bytes printed.
*/
int get_int(va_list data, char *buffer, int *i_buffer, char *flag, char *length)
{
	int count = 0;					/* Counter of bytes */
	int num = 0;
	short int s_num = 0;
	long int l_num = 0;

	if (*flag != '\0' && num >= 0)
	{
		count += print_flag_plus_space(buffer, i_buffer, flag);
	}

	if (*length == 'h')
	{
		s_num = va_arg(data, int);	/* Extract the next data arg */
		print_short_int(s_num, buffer, i_buffer);
		if (s_num <= 0)					/* If negative or equal to zero */
			count++;					/* Count 1 char(byte) */
		while (s_num != 0)				/* Count char(byte) in num */
		{
			count++;
			s_num /= 10;
		}
	}
	else if (*length == 'l')
	{
		l_num = va_arg(data, long int);	/* Extract the next data arg */
		print_long_int(l_num, buffer, i_buffer);
		if (l_num <= 0)					/* If negative or equal to zero */
			count++;					/* Count 1 char(byte) */
		while (l_num != 0)				/* Count char(byte) in num */
		{
			count++;
			l_num /= 10;
		}
	}
	else
	{
		num = va_arg(data, int);	/* Extract the next data arg */
		print_int(num, buffer, i_buffer);
		if (num <= 0)					/* If negative or equal to zero */
		count++;					/* Count 1 char(byte) */
		while (num != 0)				/* Count char(byte) in num */
		{
			count++;
			num /= 10;
		}
	}



	return (count);					/* Return number of bytes stored */
}

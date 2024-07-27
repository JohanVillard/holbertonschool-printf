#include "main.h"

/**
* print_short_int - Store in buffer an integer from a va_list.
* @num: A integer extract from va_list to be stored.
* @buffer: Array to store char
* @i_buffer: Index of buffer
*
* This function extracts an integer from get_int function and prints it.
* If the integer is negative, a '-' sign is printed first. The function then
* recursively prints each digit of the integer. The function returns the
* number of characters stored.
*
* Return: Number of bytes stored.
*/

void print_short_int(short int num, char *buffer, int *i_buffer)
{
	if (num == -32768)
	{
		/* Avoid overflow by cutting number */
		buffer[*i_buffer] = '-';				/* Store the negative sign */
		flush_buffer(buffer, i_buffer);
		buffer[*i_buffer] = '3';				/* Store the first digit of INT_MIN */
		flush_buffer(buffer, i_buffer);
		num = 2768;						/* Num take the value of the rest of the number */
	}
	else if (num < 0)							/* Check if the number is negative */
	{
		buffer[*i_buffer] = '-';				/* Store the negative sign */
		flush_buffer(buffer, i_buffer);
		num = -num;								/* Convert the number */
												/* to positive for further processing*/
	}

	if ((num / 10) != 0)						/* Check if the number has more digits */
	{
		print_short_int(num / 10, buffer, i_buffer);	/* Recursively print the rest */
												/* of the digits and add the count*/
	}

	buffer[*i_buffer] = (num % 10) + '0';		/* Recursively store the rest */
	flush_buffer(buffer, i_buffer);	/* of the digits and add the count */
}

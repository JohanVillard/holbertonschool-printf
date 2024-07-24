#include "main.h"

/**
* get_int - Get an integer from a va_list.
* @data: A va_list containing the integer to be stored.
* @buffer: Array to store char
* @i_buffer: Index of buffer
*
* This function extracts an integer from the provided va_list.
* Then call print_int function that converts and store it.
*
* Return: Return Number of bytes of number.
*/
int get_int(va_list data, char *buffer, int *i_buffer)
{
	int count = 0;					/* Counter of bytes */
	int num = va_arg(data, int);	/* Extract the next arg */


	print_int(num, buffer, i_buffer);	/* Call the function that will print */

	if (num <= 0)					/* If num is negative or equal to zero */
		count++;					/* Add 1 to count */

	while (num != 0)				/* Count char in num*/
	{
		count++;
		num /= 10;
	}

	return (count);					/* Return number of bytes stored */
}

#include "main.h"

/**
* get_int - Get an integer from a va_list.
* @data: A va_list containing the integer to be printed.
*
* Description: This function extracts an integer from the provided va_list.
* then call print_int function to print it.
*
* Return: Number of bytes printed.
*/

int get_int(va_list data)
{
	int count = 0;					/* Counter of bytes */
	int num = va_arg(data, int);	/* Extract the next data arg */

	print_int(num);					/* Call the function to print */

	if (num <= 0)					/* If negative or equal to zero */
		count++;					/* Count 1 char(byte) */

	while (num != 0)				/* Count char(byte) in num */
	{
		count++;
		num /= 10;
	}

	return (count);					/* Return number of bytes */
}

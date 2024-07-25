#include "main.h"

/**
* get_heX - Get an integer from a va_list and return the printed count
* @data: A va_list containing the integer to be converted to hexadecimal
* un uppercase and printed.
*
* Description: This function extracts an integer from the provided va_list.
* then call print_heX function that converts in heX and print it.
*
* Return: Number of bytes printed.
*/
int get_heX(va_list data)
{
	int count = 0;									/* Counter of bytes */
	unsigned int num = va_arg(data, unsigned int);	/* Extract the next data arg */

	count += print_heX(num);						/* Call the function to convert and print */

	return (count);									/* Return Number of bytes */
}

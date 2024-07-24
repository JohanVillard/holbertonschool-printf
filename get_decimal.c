#include "main.h"

/**
* get_decimal - Get an integer from a va_list.
* @data: A va_list containing the integer to convert
* in decimal and to be printed.
*
* This function extracts an integer from the provided va_list.
* Then call print_int function that converts in decimal and print it.
*
* Return: Return Number of bytes of number.
*/
int get_decimal(va_list data)
{
	int count = 0;									/* Counter of bytes */
	unsigned int num = va_arg(data, unsigned int);	/* Extract the next arg*/

	count += print_decimal(num);								/* Call the function that will print */

	return (count);									/* Return Number of bytes */
}

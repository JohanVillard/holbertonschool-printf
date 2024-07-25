#include "main.h"

/**
* get_decimal - Get an integer from a va_list and return the printed count
* @data: A va_list containing the integer to convert
* in decimal and to be printed.
*
* Descrition: This function extracts an integer from the provided va_list.
* then call print_int function and print it.
*
* Return: Return mumber of bytes printed.
*/
int get_decimal(va_list data)
{
	int count = 0;									/* Counter of bytes */
	unsigned int num = va_arg(data, unsigned int);	/* Extract the next data arg */

	count += print_decimal(num);					/* Call the function to print */

	return (count);									/* Return Number of bytes */
}

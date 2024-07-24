#include "main.h"

/**
* get_heX - Get an integer from a va_list.
* @data: A va_list containing the integer to convert in X and to be printed.
*
* This function extracts an integer from the provided va_list.
* Then call print_int function that converts in heX and print it.
*
* Return: Return Number of bytes of number.
*/
int get_heX(va_list data)
{
	int count = 0;									/* Counter of bytes */
	unsigned int num = va_arg(data, unsigned int);	/* Extract the next arg*/

	count += print_heX(num);									/* Call the function that will print */

	return (count);									/* Return Number of bytes */
}

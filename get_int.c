#include "main.h"

/**
* get_int - Get an integer from a va_list.
* @data: A va_list containing the integer to be printed.
*
* This function extracts an integer from the provided va_list.
* Then call print_int function that converts and print it.
*
* Return: Return Number of bytes of number.
*/

int get_int(va_list data)
{
	int count = 0;					/* Counter of bytes */
	int num = va_arg(data, int);	/* Extract the next arg*/

	print_int(num);					/* Call the function that will print */

	return (count);					/* Return Number of bytes */
}

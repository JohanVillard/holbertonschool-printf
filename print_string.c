#include "main.h"

/**
* print_string - Prints a string character by character
* @data: List from which to extract the next argument
*
* This function takes a string as input and prints each character
* one by one. If the input string is NULL, the function returns 0
* immediately to avoid unnecessary execution.
*
* Return: Number of bytes printed.
*/

int print_string(va_list data)
{
	int i, count = 0;
	char *str = va_arg(data, char *);

	if (str == NULL) /*if string is empty*/
			 /*return 0 to stop execution of useless function*/
	{
		str = "(null)";					/* Display (null) */
		for (i = 0; str[i] != '\0'; i++)
		{
			count++;
			_putchar(str[i]);
		}
		return (count);					/* Number of chars of (null) */
	}
	for (i = 0; str[i] != '\0'; i++) /*scrolls down the line*/
					/*to get all the string's indexes*/
	{
		_putchar(str[i]);/*print found indexes of a string*/
		count++;
	}
	return (count);
}

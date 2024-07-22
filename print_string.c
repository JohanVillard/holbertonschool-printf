#include "main.h"

/**
* print_string - Prints a string character by character
* @data: The string to be printed
*
* This function takes a string as input and prints each character
* one by one. If the input string is NULL, the function returns 0
* immediately to avoid unnecessary execution.
*
* Return: 0 on successful completion
*/

int print_string(va_list data)
{
	int i;
	char *str = va_arg(data, char *);

	if (str == NULL) /*if string is empty*/
			 /*return 0 to stop execution of useless function*/
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++) /*scrolls down the line*/
					/*to get all the string's indexes*/
	{
		_putchar(str[i]);/*print found indexes of a string*/
	}
	return (0);
}

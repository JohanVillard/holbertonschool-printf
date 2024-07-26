#include "main.h"

/**
* print_String - Store a string character by character
* @data: List from which to extract the next argument
* @buffer: Array to store char
* @i_buffer: Index of buffer

* This function takes a string as input and stores each character
* one by one. If the input string is NULL, the function returns 0
* immediately to avoid unnecessary execution.
*
* Return: Number of bytes stored.
*/
int print_String(va_list data, char *buffer, int *i_buffer)
{
	int i, count = 0;
	char *str = va_arg(data, char *);

	if (str == NULL) /*if string is empty*/
			 /*return 0 to stop execution of useless function*/
	{
		str = "(null)";					/* Display (null) */
		for (i = 0; str[i] != '\0'; i++)
		{
			buffer[*i_buffer] = str[i];			/* Store the char */
			count += flush_buffer(buffer, i_buffer);
		}
		return (count);					/* Number of chars of (null) */
	}
	/* Scrolls down the line to get all the string's indexes */
	for (i = 0; str[i] != '\0'; i++)			
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			buffer[*i_buffer] = '\\';						/* Store the char */
			count += flush_buffer(buffer, i_buffer);
			buffer[*i_buffer] = 'x';						/* Store the char */
			count += flush_buffer(buffer, i_buffer);
			if (str[i] > 0 && str[i] < 16)
			{
				buffer[*i_buffer] = '0';
				count += flush_buffer(buffer, i_buffer);
				count += print_heX(str[i], buffer, i_buffer);
			}
			else
				count += print_heX(str[i], buffer, i_buffer);	/* Store the char */
		}
		else
		{
			buffer[*i_buffer] = str[i];						/* Store the char */
			count += flush_buffer(buffer, i_buffer);
		}
	}
	return (count);
}

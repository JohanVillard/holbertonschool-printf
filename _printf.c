#include "main.h"

/**
 * _printf - Prints in the specified format
 * @format: string to parse
 *
 * Additional info to put
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	char *buffer = malloc(1024);						/* Create an array of char */
	int i_buffer = 0;									/* Position of buffer's index */
	va_list data;										/* Store a va_list */
	unsigned int count = 0;								/* Number of characters */

	if (format == NULL)									/* If pointer of format isn't NULL */
		return (-1);

	va_start(data, format);								/* Initialize the va_list */
	while (*format)										/* Run the string */
	{
		if (*format == '%')								/* If the directive begins */
		{
			count += modulo_parser(format, data);		/* Specifier check */
			format += 2;								/* Move pointer after the % and specifier */
		}
		else
		{
			if (*format != '\0')						/* If index of format is no empty */
			{
				buffer[i_buffer] = *format;
				i_buffer++;
				format++;								/* Move format index by 1 */
				count++;								/* Count length of string */
			}
		}
	}
	va_end(data);										/* Stop va_list */

	write(1, buffer, i_buffer);

	free(buffer);

	return (count);
}

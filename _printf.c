#include "main.h"

/**
 * _printf - Prints in the specified format.
 * @format: String to parse.
 *
 * Description: Prints output according to a format.
 *
 * Return: Number of characters printed.
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int i_buffer = 0;										/* Position of buffer's index */
	va_list data;											/* Store a va_list */
	unsigned int count = 0;									/* Number of characters(bytes) */
	char *buffer = malloc(1024);							/* Create an array of char */

	if (format == NULL || buffer == NULL)					/* If format or buffer isn't NULL */
		return (-1);

	va_start(data, format);									/* Initialize the va_list */
	while (*format)											/* Run the string */
	{
		if (*format == '%')									/* If the directive(%) begins */
		{
			if (*(format + 1) == '\0')						/* Special case "%"" only */
				return (-1);
			count += modulo_parser(format, data, buffer, &i_buffer); /* Specif check */
			format += 2;									/* Move pointer after the % and specifier */
		}
		else
		{
				buffer[i_buffer] = *format;
				flush_buffer(buffer, &i_buffer);
				format++;									/* Move format index by 1 */
				count++;									/* Count length of string */
		}
	}
	va_end(data);											/* Stop va_list */

	write(1, buffer, i_buffer);								/* Write all buffer */

	free(buffer);

	return (count);
}

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
	unsigned int count = 0;							/* Number of characters(bytes) */
	char *buffer = malloc(1024), *flag = malloc(10), *length = malloc(2);						/* Create an array of char */

	if (format == NULL || buffer == NULL)					/* If format or buffer isn't NULL */
		return (-1);
	va_start(data, format);									/* Initialize the va_list */
	while (*format)											/* Run the string */
	{
		if (*format == '%')									/* If the directive(%) begins */
		{
			if (*(format + 1) == '\0' ||
			(*(format + 1) == ' ' && *(format + 2) == '\0'))/* Special case */
			{
				free(buffer);
				return (-1);
			}
			if (*(format + 1) == '#' || *(format + 1) == '+' || *(format + 1) == ' ')
			{
				if ((*(format + 1) == ' ' && *(format + 2) == '+') ||
					(*(format + 1) == '+' && *(format + 2) == ' '))
				{
					*flag = '+';	/* + overrides space if they follows each other */
					format++;	/* pass one character */
					flag++;
				}
				else
				{
					*flag = *(format + 1);	/*  Store flag */
					flag++;
				}
				format++;
			}
			if (*(format + 1) == 'h' || *(format + 1) == 'l')
			{
				*length = *(format + 1);	/*  Store flag */
				format++;
			}
			/* Specif check */
			count += modulo_parser(format, data, buffer, &i_buffer, flag, length);
			format += 2;									/* Move pointer after the % and specifier */
		}
		else
		{
				buffer[i_buffer] = *format;					/* Store in the buffer */
				count += flush_buffer(buffer, &i_buffer);	/* If full, print then reset i */
				format++;									/* Move format index by 1 */
		}
	}
	va_end(data);											/* Stop va_list */
	buffer[i_buffer] = '\0';								/* Finish the buffer */
	if (i_buffer > 0)											/* Call if buffer is not empty */
		write(1, buffer, i_buffer);							/* Write all buffer */
	free(buffer);
	return (count);
}

#include "main.h"

/**
 * _printf - Prints in the specified format
 * @format: String to parse
 *
 * Description: Prints output according to a format
 *
 * Return: She number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list data;											/* Store a va_list */
	unsigned int count = 0;									/* Number of characters(bytes) */

	if (format == NULL)										/* If error */
		return (-1);

	va_start(data, format);									/* Initialize the va_list */
	while (*format)											/* Run the string */
	{
		if (*format == '%')									/* If the directive(%) begins */
		{
			if (*(format + 1) == '\0')						/* Special case "%"" only */
				return (-1);
			count += modulo_parser(format, data);			/* Pointing the function */
															/* according to specifier */
			format += 2;									/* Move pointer after the % and specifier */
		}
		else
		{
			_putchar(*format);								/* Print actual character */
			format++;										/* Move format index by 1 */
			count++;										/* Count length of string */
		}
	}
	va_end(data);											/* Stop va_list */

	return (count);
}

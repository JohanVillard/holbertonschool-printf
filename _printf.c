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
	va_list data;										/* Store a va_list */
	unsigned int count = 0;								/* Number of characters */

	if (format == NULL)									/* If pointer of format isn't NULL */
		return (-1);

	va_start(data, format);								/* Initialize the va_list */
	while (*format)										/* Run the string */
	{
		if (*format == '%')								/* If the directive begins */
		{
			count += modulo_parser(format, data);
				format += 2;							/* Move pointer after the % and specifier */
		}
		else
		{
			if (*format != '\0')							/* If index of format is no empty */
			{
				_putchar(*format);							/* Print actual character */
				format++;									/* Move format index by 1 */
				count++;									/* Count length of string */
			}
		}
	}
	va_end(data);										/* Stop va_list */

	return (count);
}

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
	int i = 0;											/* Occurrence counter */
	parser_t modulo_parser[] = {						/* Specifier associates to print and count functions */
		{"c", print_char},
		{"s", print_string},
		{"d", get_int},
		{"i", get_int},
		{"%", print_percent},
		{"b", print_binary},
		{"x", get_hex},
		{"X", get_heX},
		{NULL, NULL},									/* Indicates the end of the structure */
	};

	if (format == NULL)									/* If pointer of format isn't NULL */
		return (-1);

	va_start(data, format);								/* Initialize the va_list */
	while (*format)										/* Run the string */
	{
		if (*format == '%')								/* If the directive begins */
		{	
			while (modulo_parser[i].specifier != NULL)	/* Run the modulo struct */
			{	
				if (*modulo_parser[i].specifier == *(format + 1))	/* If a specifier is found */
				{	
					count += modulo_parser[i].f(data);	/* Count the bytes and print the value */
					format += 2;						/* Move pointer after the % and specifier */
					if (*format != '%')					/* If not another directive begin */
					{
						i = 0;							/* Counter is reset for next search */
						break;							/* Stop the while loop */
					}
					i = 0;								/* If it is, counter is reset */
				}
				else									/* If a specifier is not found */
				{		
					i++;								/* Continue to search */
				}
			}
		}
		if (*format != '\0')							/* If index of format is no empty */
		{
			_putchar(*format);
			format++;									/* Move format index by 1 */
			count++;									/* Count length of string */
		}										
	}
	va_end(data);										/* Stop va_list */

	return (count);
}

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
	va_list data;
	unsigned int count = 0;			/* Number of characters */
	int i = 0;
	parser_t modulo_parser[] = {	/*  */
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL},
	};

	va_start(data, format);			/* Start the check lst */
	while (*format)					/* Run the string */
	{
		if (*format == '%')
		{
			while (modulo_parser[i].specifier != NULL)
			{
				if (*modulo_parser[i].specifier == *(format + 1))
				{
					modulo_parser[i].f(data);
					format += 2;
					if (*format != '%')
					{
						break;
					}
				}
				i++;
			}
		}
		i = 0;
		if (*format != '\0')
		{
			_putchar(*format);
			format++;
			count++;
		}						/* Count length of string */				/* Move format index by 1 */
	}
	va_end(data);

	return (count);
}

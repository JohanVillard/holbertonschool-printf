#include "main.h"

/**
 * modulo_parser - Return the associate function if char is find
 * @format: String from which the char is extracted
 * @data: Variadic list to extract next argument
 * @buffer: Array to store char
 * @i_buffer: Index of buffer
 *
 * Return: Return the number of bytes printed
 */
int modulo_parser(const char *format, va_list data,
													char *buffer, int *i_buffer)
{
	int i = 0, count = 0;									/* Occurrence and bytes counter */
	parser_t modulo_parser[] = {							/* Specifier associates to print */
		{"c", print_char},
		{"s", print_string},
		{"d", get_int},
		{"i", get_int},
		{"%", print_percent},
		{NULL, NULL},										/* Indicates the end of the structure */
	};

	while (modulo_parser[i].specifier != NULL)				/* Run the modulo struct */
	{
		if (*modulo_parser[i].specifier == *(format + 1))	/* Specifier is found ? */
		{
			count += modulo_parser[i].f(data, buffer, i_buffer);	/* Count/Store value */
			break;											/* Stop the while loop */
		}
		else												/* If a specifier is not found */
		{
			i++;											/* Continue to search */
			if (modulo_parser[i].specifier == NULL)			/* If no specifier is find */
			{
				_putchar (*format);							/* Print % */
				_putchar (*(format + 1));					/* Print char after */
			}
		}
	}

	return (count);
}

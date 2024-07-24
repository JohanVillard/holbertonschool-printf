#include "main.h"

/**
 * modulo_parser - Return the associate function if char is find
 * @format: String from which the char is extracted
 * @data: Variadic list to extract next argument
 *
 * Return: Return the number of bytes printed
 */
int modulo_parser(const char *format, va_list data)
{
	int i = 0, count = 0;								/* Occurrence and bytes counter */
	parser_t modulo_parser[] = {						/* Specifier associates to print */
		{"c", print_char},								/* and count functions */
		{"s", print_string},
		{"d", get_int},
		{"i", get_int},
		{"%", print_percent},
		{"b", print_binary},
		{"x", get_hex},
		{"X", get_heX},
		{"o", get_octal},
		{NULL, NULL},									/* Indicates the end of the structure */
	};

	while (modulo_parser[i].specifier != NULL)			/* Run the modulo struct */
	{
		if (*modulo_parser[i].specifier == *(format + 1))	/* Specifier is found ? */
		{
			count += modulo_parser[i].f(data);	/* Count the bytes and print the value */
			break;								/* Stop the while loop */
		}
		else									/* If a specifier is not found */
		{
			i++;								/* Continue to search */
		}
	}

	return (count);
}

#include "main.h"

/**
 * modulo_parser - Call the associated function if the specifier matches.
 * and return the printed count.
 * @format: String from which the character is extracted specifier.
 * @data: List from which to extract the next argument
 * corresponding to the specifier.
 *
 * Decription: This function compares the specifiers stored in the structure
 * with the letter following the %. If a match is found,
 * the associated function in the structure is called.
 *
 * Return: Number of bytes printed
 */
int modulo_parser(const char *format, va_list data)
{
	int i = 0, count = 0;									/* Index of structure and bytes counter */
	parser_t modulo_parser[] = {							/* Specifier associates to convert, */
		{"c", print_char},									/* print and count functions */
		{"s", print_string},
		{"d", get_int},
		{"i", get_int},
		{"%", print_percent},
		{"b", print_binary},
		{"x", get_hex},
		{"X", get_heX},
		{"o", get_octal},
		{"u", get_decimal},
		{NULL, NULL},										/* Indicates the end of the structure */
	};

	while (modulo_parser[i].specifier != NULL)				/* Run the modulo struct */
	{
		if (*modulo_parser[i].specifier == *(format + 1))	/* Specifier is found ? */
		{
			count += modulo_parser[i].f(data);				/* Calls up the associated function */
			break;											/* Stop the while loop */
		}
		else												/* If a specifier is not found */
		{
			i++;											/* Continue to search */
			if (modulo_parser[i].specifier == NULL)			/* If no specifier is find */
			{
				_putchar (*format);							/* Print % */
				_putchar (*(format + 1));					/* Print character after */
				count += 2;
			}
		}
	}
	return (count);
}

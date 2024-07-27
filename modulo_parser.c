#include "main.h"

/**
 * modulo_parser - Call the associated function if the specifier matches.
 * and return the printed count.
 * @format: String from which the character is extracted specifier.
 * @data: List from which to extract the next argument
 * @buffer: Array to store char
 * @i_buffer: Index of buffer
 * corresponding to the specifier.
 * @flag: store flag
 * @length: length modifier
 *
 * Decription: This function compares the specifiers stored in the structure
 * with the letter following the %. If a match is found,
 * the associated function in the structure is called.
 *
 * Return: Number of bytes printed
 */
int modulo_parser(const char *format, va_list data,
	char *buffer, int *i_buffer, char *flag, char *length)
{
	int i = 0, count = 0;									/* Occurrence and bytes counter */
	parser_t modulo_parser[] = {							/* Specifier associates to print */
		{"c", print_char}, {"s", print_string}, {"d", get_int},
		{"i", get_int}, {"%", print_percent}, {"b", print_binary},
		{"x", get_hex}, {"X", get_heX}, {"o", get_octal},
		{"u", get_decimal}, {"S", print_String}, {"p", print_address},
		{NULL, NULL},										/* Indicates the end of the structure */
	};

	while (modulo_parser[i].specifier != NULL)				/* Run the modulo struct */
	{
		if (*modulo_parser[i].specifier == *(format + 1))	/* Specifier is found ? */
		{
			/* Count/Store value */
			count += modulo_parser[i].f(data, buffer, i_buffer, flag, length);
			break;											/* Stop the while loop */
		}
		else												/* If a specifier is not found */
		{
			i++;											/* Continue to search */
			if (modulo_parser[i].specifier == NULL)			/* If no specifier is find */
			{
				buffer[*i_buffer] = *format;				/* Print % */
				count += flush_buffer(buffer, i_buffer);
				buffer[*i_buffer] = *(format + 1);			/* Print character after */
				count += flush_buffer(buffer, i_buffer);
			}
		}
	}
	return (count);
}

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
	unsigned int count = 0;			/* Number of characters */
	int (*f)(char c);				

	f = &print_char;

		while (*format)				/* pass on the word */
	{
		count += (*f)(*format);		/* Count length of string */
		format++;					/* Move format index by 1 */
	}

	print_char(count + '0');

	return (count);
}

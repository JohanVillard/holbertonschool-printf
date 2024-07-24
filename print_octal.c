#include "main.h"
/**
 * print_octal - Convert a decimal number
 * into octal number and print
 * @decimal_num: integer to convert and to print
 *
 * Return: The number of bytes of converted integer
 */
int print_octal(unsigned int decimal_num)
{
	int i = 0, j = 0, count = 0;
	char octal_Number[100];

	while (decimal_num != 0)				/* Loop while decimal num don't return 0 */
	{
		octal_Number[i] = decimal_num % 8;
		decimal_num /=  8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)			/* Print in reverse */
	{
		_printf("%d", octal_Number[j]);
		count++;
	}

	return (count);
}

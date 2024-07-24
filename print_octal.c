#include "main.h"
/**
 * print_octal - Convert an unsigned int number
 * into octal number and print
 * @decimal_num: integer to convert and to print
 * @buffer: Array to store char
 * @i_buffer: Index of buffer
 *
 * Return: The number of bytes of converted integer
 */
int print_octal(unsigned int decimal_num, char *buffer, int *i_buffer)
{
	int i = 0, j = 0, count = 0;
	char octal_Number[100];


	if (decimal_num == 0)
	{
		count++;
		buffer[*i_buffer] = '0';
		(*i_buffer)++;
	}

	while (decimal_num != 0)				/* Loop while decimal num don't return 0 */
	{
		octal_Number[i] = decimal_num % 8;
		decimal_num /=  8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)			/* Print in reverse */
	{
		buffer[*i_buffer] = octal_Number[j] + '0';
		(*i_buffer)++;
		count++;
	}

	return (count);
}

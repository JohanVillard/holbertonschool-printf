#include "main.h"
/**
 * print_decimal - Convert a unsigned int number
 * into decimal number and print
 * @decimal_num: integer to convert and to print
 * @buffer: Array to store char
 * @i_buffer: Index of buffer
 *
 * Return: The number of bytes of converted integer
 */
int print_decimal(unsigned int decimal_num, char *buffer, int *i_buffer)
{
	int i = 0, j = 0, count = 0;
	char dec_Number[100];

	if (decimal_num == 0)
	{
		count++;
		buffer[*i_buffer] = '0';
		flush_buffer(buffer, i_buffer);
	}

	while (decimal_num != 0)				/* Loop while decimal num don't return 0 */
	{
		dec_Number[i] = decimal_num % 10 + '0';
		decimal_num /=  10;
		i++;
	}

	for (j = i - 1; j >= 0; j--)			/* Print in reverse */
	{
		buffer[*i_buffer] = dec_Number[j];
		(*i_buffer)++;
		count++;
	}

	return (count);
}

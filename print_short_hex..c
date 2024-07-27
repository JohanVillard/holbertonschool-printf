#include "main.h"
/**
 * print_short_hex - Convert unsigned integer into hex,
 * prints in lowercase and counts his number of bytes.
 * @decimal_num: Unsigned integer to convert and to print.
 * @buffer: Array to store char
 * @i_buffer: Index of buffer
 *
 * Return: Number of bytes printed.
 */
int print_short_hex(unsigned short int decimal_num,
	char *buffer,
	int *i_buffer)
{
	int i = 1, j, count = 0;
	char hexa_Number[100];
	unsigned long int temp = 0;

	if (decimal_num == 0)
	{
		buffer[*i_buffer] = '0';
		count += flush_buffer(buffer, i_buffer);
	}

	while (decimal_num != 0)			/* Loop while decimal num don't return 0 */
	{
		temp = decimal_num % 16;

		/* Converting decimal number */
		/* in to a hexadecimal number */
		/* Lowercase */
		if (temp < 10)
			temp = temp + 48;			/* Add 48 refering to ASCII table */
		else
			temp = temp + 87;			/* Add 87 refering to ASCII table */

		hexa_Number[i] = temp;
		i++;
		decimal_num = decimal_num / 16;
	}

	for (j = i - 1; j > 0; j--)			/* Print in reverse */
	{
		buffer[*i_buffer] = hexa_Number[j];
		count += flush_buffer(buffer, i_buffer);
	}

	return (count);
}

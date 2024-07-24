#include "main.h"
/**
 * print_heX - Convert an unsigned int number
 * into hex number with uppercase and print
 * @decimal_num: integer to convert and to print
 *
 * Return: The number of bytes of converted integer
 */
int print_heX(unsigned int decimal_num)
{
	int i = 1, j, count = 0;
	char hexa_Number[100];
	unsigned int temp = 0;

	while (decimal_num != 0)			/* Loop while decimal num don't return 0 */
	{
		temp = decimal_num % 16;

		/* converting decimal number */
		/* in to a hexa decimal */
		/* number */
		if (temp < 10)
			temp = temp + 48;			/* Add 48 refering to ASCII table */
		else
			temp = temp + 55;			/* Add 55 refering to ASCII table */

		hexa_Number[i] = temp;
		i++;
		decimal_num = decimal_num / 16;
	}

	for (j = i - 1; j > 0; j--)			/* Print in reverse */
	{
		_printf("%c", hexa_Number[j]);
		count++;
	}

	return (count);
}

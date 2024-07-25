#include "main.h"

/**
* print_binary - Convert unsigned integer into binary,
* prints and counts his number of bytes.
* @data: List from which to extract the next argument
*
* Return: Number of bytes printed.
*/

int print_binary(va_list data)
{
	unsigned int num = va_arg(data, int);
	int count = 0, i = 0, j = 0;
	/* Stores binary representation of number */
	int binaryNum[32]; /* Assuming 32 bit integer. */

	if (num == 0)
	{
		count++;			/* Add 1 to count */
		_putchar('0');
	}

	while (num > 0)
	{
		/* Storing remainder in binary array */
		binaryNum[i] = num % 2;
		num = num / 2;
		i++;
	}

	/* Printing binary array in reverse order */
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binaryNum[j] + '0');
		count++;
	}

	return (count);
}

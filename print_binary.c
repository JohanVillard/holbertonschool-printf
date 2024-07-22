#include "main.h"

/**
* print_binary - Convert decimal to binaty and print the number
* @data: Data to convert into binary
*
* Return: Count of bytes in the number
*/

int print_binary(va_list data)
{
	int num = va_arg(data, int);
	int count = 0, i = 0, j = 0;
	/* Stores binary representation of number */
	int binaryNum[32]; /* Assuming 32 bit integer. */

	if (num == 0)
	{
		_putchar('0');
	}

	while (num > 0)
	{
		/* storing remainder in binary array */
		binaryNum[i] = num % 2;
		num = num / 2;
		i++;
	}

	/* printing binary array in reverse order */
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binaryNum[j] + '0');
		count++;
	}

	return (count);
}

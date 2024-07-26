#include "main.h"

/**
* print_binary - Convert unsigned integer into binary,
* prints and counts his number of bytes.
* @data: List from which to extract the next argument
* @buffer: Array to store char
* @i_buffer: Index of buffer
*
* Return: Number of bytes printed.
*/

int print_binary(va_list data, char *buffer, int *i_buffer)
{
	unsigned int num = va_arg(data, int);
	int count = 0, i = 0, j = 0;
	/* Stores binary representation of number */
	int binaryNum[32]; /* Assuming 32 bit integer. */

	if (num == 0)
	{
		count++;
		buffer[*i_buffer] = '0';
		count += flush_buffer(buffer, i_buffer);
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
		buffer[*i_buffer] = binaryNum[j] + '0';
		count += flush_buffer(buffer, i_buffer);
	}

	return (count);
}

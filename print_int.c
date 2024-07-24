#include "main.h"

/**
* print_int - Prints an integer from a va_list.
* @num: A integer extract from va_list to be printed.
*
* This function extracts an integer from get_int function and prints it.
* If the integer is negative, a '-' sign is printed first. The function then
* recursively prints each digit of the integer. The function returns the
* number of characters printed.
*
* Return: The number of characters printed.
*/

void print_int(int num)
{
	if (num == INT_MIN)
	{
		/* Avoid overflow by cutting number */
		_putchar('-');			/*Print the negative sign*/
		_putchar('2');			/*Print the first digit of INT_MIN*/
		num = 147483648;		/* Num take the value of the rest of the number */
	}
	else if (num < 0)/*Check if the number is negative*/
	{
		_putchar('-');/*Print the negative sign*/
		num = -num;/*Convert the number*/
					/*to positive for further processing*/
	}

	if ((num / 10) != 0)/*Check if the number has more digits*/
	{

		print_int(num / 10);/*Recursively print the rest*/
					    /*of the digits and add the count*/
	}

	_putchar((num % 10) + '0');/*Recursively print the rest*/
					  /*of the digits and add the count*/
}

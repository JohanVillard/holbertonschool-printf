#include "main.h"

/**
 * @brief 
 * @param data 
 * @param buffer 
 * @param i_buffer 
 * @return 
 */
int print_address(va_list data, char *buffer, int *i_buffer)
{
	int count = 0;

	buffer[*i_buffer] = '0';						/* Store the char */
	count += flush_buffer(buffer, i_buffer);
	buffer[*i_buffer] = 'x';						/* Store the char */
	count += flush_buffer(buffer, i_buffer);


	count += get_hex(data, buffer, i_buffer);

	return (count);
}

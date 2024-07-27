#include "main.h"

int print_flag_hash(const char *format, char *buffer, int *i_buffer)
{
	int count = 0;

	if (*(format + 2) == 'o')
	{
		buffer[*i_buffer] = '0';					/* Print 0 */
		count += flush_buffer(buffer, i_buffer);						/* Move pointer on # */
	}
	else if (*(format + 2) == 'x' || *(format + 2) == 'X')
	{
		buffer[*i_buffer] = '0';					/* Print 0 */
		count += flush_buffer(buffer, i_buffer);
		buffer[*i_buffer] = *(format + 2);
		count += flush_buffer(buffer, i_buffer);							/* Move pointer on # */
	}

	return (count);
}

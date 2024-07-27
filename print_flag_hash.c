#include "main.h"

int print_flag(const char *format, char *buffer, int *i_buffer)
{
	int count = 0;

	if (*(format + 2) == 'o')
	{
		if (*(format + 1) == '#')
		{
			buffer[*i_buffer] = '0';					/* Print 0 */
			count += flush_buffer(buffer, i_buffer);
		}
	}
	else if (*(format + 2) == 'x' || *(format + 2) == 'X')
	{
		if (*(format + 1) == '#')
		{
			buffer[*i_buffer] = '0';					/* Print 0 */
			count += flush_buffer(buffer, i_buffer);
			buffer[*i_buffer] = *(format + 2);
			count += flush_buffer(buffer, i_buffer);
		}
	}
	else if (*(format + 2) == 'd' || *(format + 2) == 'i')
	{
		if (*(format + 1) == ' ')
		{
			buffer[*i_buffer] = ' ';					/* Print 0 */
			count += flush_buffer(buffer, i_buffer);
		}
		else if (*(format + 1) == '+')
		{
			buffer[*i_buffer] = '+';					/* Print 0 */
			count += flush_buffer(buffer, i_buffer);
		}
	}

	return (count);
}

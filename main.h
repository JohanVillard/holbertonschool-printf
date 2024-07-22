#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
/* -------------------------------------------------------*/
/* Structure */
/**
 * struct parser - Return function after format match
 * @specifier: format to print
 * @f: function associates to format
 */
typedef struct parser
{
	char *specifier;
	int (*f)(va_list);
} parser_t;

/* ----------------------------------------------------- */
/* Functions */
int _printf(const char *, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_binary(va_list);

#endif /* MAIN.H */


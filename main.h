#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
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

int _printf(const char *format, ...);
int print_char(char c);

/* ----------------------------------------------------- */

#endif /* MAIN.H */


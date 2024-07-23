#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
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

/* ----------------------Functions------------------------- */
/* Print formated string */
int _printf(const char *, ...);
/* Print specified char */
int _putchar(char);
/* Print char from va_list */
int print_char(va_list);
/* Print string from va_list*/
int print_string(va_list);
/* Print integer from va_list*/
int get_int(va_list);
int print_int(int);
/* Print percent from va_list */
int print_percent(va_list);


#endif /* MAIN.H */


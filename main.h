#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

/* Print formatted string */
int _printf(const char *, ...);
/* Modulo parser */
int modulo_parser(const char *, va_list);
/* Print specified char */
int _putchar(char);
/* Print char from va_list */
int print_char(va_list);
/* Print string from va_list*/
int print_string(va_list);
/* Get and Print int from va_list */
void print_int(int);
int get_int(va_list);
/* Print percent if %% */
int print_percent(va_list);
/* Convert and print decimal number into binary */
int print_binary(va_list);
/* Get, Convert and Print decimal number into hex with lowercase */
int get_hex(va_list);
int print_hex(unsigned int);
/* Get, Convert and Print decimal number into hex with uppercase */
int get_heX(va_list);
int print_heX(unsigned int);

#endif /* MAIN.H */


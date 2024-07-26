#ifndef MAIN_H
#define MAIN_H

/* ------------------------------------------------------ */

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
	int (*f)(va_list, char *, int *);
} parser_t;

/* ----------------------------------------------------- */

/* Print formatted string */
int _printf(const char *, ...);
/* Empty and reset the buffer memory */
void flush_buffer(char *, int *);
/* Modulo parser */
int modulo_parser(const char *, va_list, char *, int *);
/* Print specified char */
int _putchar(char);
/* Print char from va_list */
int print_char(va_list, char *, int *);
/* Print string from va_list*/
int print_string(va_list, char *, int *);
/* Get and Print int from va_list */
void print_int(int, char *, int *);
int get_int(va_list, char *, int *);
/* Print percent if %% */
int print_percent(va_list, char *, int *);
/* Convert and Print unsigned integer number into binary */
int print_binary(va_list, char *, int *);
/* Get, Convert and Print unsigned integer number into hex with lowercase */
int get_hex(va_list, char *, int *);
int print_hex(unsigned int, char *, int *);
/* Get, Convert and Print unsigned integer number into hex with uppercase */
int get_heX(va_list, char *, int *);
int print_heX(unsigned int, char *, int *);
/* Get, Convert and Print unsigned integer number into octal */
int get_octal(va_list, char *, int *);
int print_octal(unsigned int, char *, int *);
/* Get, Convert and Print unsigned integer number into decimal number */
int get_decimal(va_list, char *, int *);
int print_decimal(unsigned int, char *, int *);

/* ------------------------------------------------------ */

#endif /* MAIN.H */


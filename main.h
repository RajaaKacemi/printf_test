#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * get_format: struct
 * @fmt: the format
 * @f: the function associated to the format
 */
typedef struct format
{
	char *fmt;
	int (*f)(va_list);
}fmt;

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);

/* functions associated to formats*/

int fmt_char(va_list);
int fmt_integer(va_list);
int fmt_string(va_list);
int fmt_percent(va_list);

/* pointer function to choose the right function */
int (*get_fmt_func(const char *format))(va_list);

#endif

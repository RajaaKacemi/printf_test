#include "main.h"

/** 
 * _printf - a function that produces output according to a format.
 * @format:  is a character string
 * @...: A variable number of paramters
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
*/

int _printf(const char *format, ...)
{
	va_list ListArgs;
	int NumChar;
	int (*fmt_func)(va_list);

	fmt_func = get_fmt_func(format);

	if(!fmt_func)
		return (0);

	NumChar = fmt_func(ListArgs);
	va_end(ListArgs);
	return (NumChar);
}


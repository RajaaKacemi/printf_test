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
	int NumChar, i, len = 0;
	int (*fmt_func)(va_list);
	char currentChar;

	len = _strlen(format);

	for(i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			fmt_func = get_fmt_func(format, (i + 1));
			if (fmt_func == NULL)
			{
				currentChar = format[i + 1];
				_putchar(currentChar);
				NumChar++;
			}
			NumChar += fmt_func(ListArgs); /*return number of characters and print it*/
		}
		else
		{
			currentChar = format[i];
			_putchar(currentChar);
			NumChar++;
		}
	}
	va_end(ListArgs);
	return (NumChar);
}


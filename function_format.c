#include "main.h"

/**
  * fmt_char - a function print a character
  * @argList: list of arguments
  * Return: 1 mean one char printed.
 */
int len = 0;
int fmt_char(va_list argList)
{
	unsigned char c;

	c = (int)va_arg(argList, int);
	_putchar(c);
	len++;
	return (len);
}
/**
  * fmt_string - print a string
  * argList: list of arguments
  * Return: the length of the string
 */
int fmt_string(va_list argList)
{
	const char *p;
	int lenStr;

	p = (const char*)va_arg(argList, const char*);

	while (*p != '\0')
	{
		_putchar(*p++);
		lenStr++;
	}
	len = lenStr + 2;
	return (len);
}

/**
  * fmt_percent - print a %
  * argList: list of arguments
  * Return: 1 
 */

int fmt_percent(__attribute__((unused)) va_list argList)
{
	_putchar('%');
	len++;
	return (len);
}

/**
 * fmt_integer - a function print integer 
 * @argList: list of numbers
 * Return: length of number
 */
int fmt_integer(va_list argList)
{
	int nbr, q;

	nbr = (int)va_arg(argList, int);
	if (nbr < 0)
	{
		len++;
		_putchar('-');
	}
	while (nbr % 10 != 0)
	{
		q = nbr / 10;
		len++;
		_putchar(q);
	}
	return (len);
}
	

#include "main.h"

/**
  * fmt_char - a function print a character
  * @argList: list of arguments
  * Return: 1 mean one char printed.
 */

int fmt_char(va_list argList)
{
	char c;

	c = va_arg(argList, int);
	_putchar(c);
	return (1);
}
/**
  * fmt_string - print a string
  * argList: list of arguments
  * Return: the length of the string
 */
int fmt_string(va_list argList)
{
	char *p;
	int lenStr;

	p = va_arg(argList, char*);
	lenStr = _strlen(p);

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	lenStr = lenStr + 2;
	return (lenStr);
}

/**
  * fmt_percent - print a %
  * argList: list of arguments
  * Return: 1 
 */

int fmt_percent(__attribute__((unused)) va_list argList)
{
	_putchar('%');
	return (1);
}

/**
 * fmt_integer - a function print integer 
 * @argList: list of numbers
 * Return: length of number
 */
int fmt_integer(va_list argList)
{
	int nbr, q, len = 0;

	nbr = va_arg(argList, int);
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


	

#include "main.h"

/**
  * get_fmt_func - a function select the correct function
  * @format: the argument
  * Reture: a pointer to function
 */

int (*get_fmt_func(const char *format))(va_list)
{
	fmt fmts[] = {
		{"c", fmt_char},
		{"s", fmt_string},
		{"%", fmt_percent},
		{"d", fmt_integer},
		{"i", fmt_integer},
		{NULL , NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (format && fmts[i].fmt[0] == format[1])
			return (fmts[i].f);
		i++;
	}
	return (NULL);
}

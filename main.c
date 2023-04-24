#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
	
  len = _printf("Let's try to printf a simple sentence.\n");
  len += _printf("Unknown:[%r]\n");
   len +=  _printf("yy\n");
   printf("%d\n", len);
    _printf("Negative:[%d]\n", -762534);
    len += _printf("Percent:[%%]\n");
	printf("%d\n", len);
    _printf("Len:[%d]\n", len);
    return (0);
}

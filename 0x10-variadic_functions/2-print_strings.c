#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
  *print_strings - prints strings
  *@separator: -  char type param
  *@n: - int type param, number of arguments
  *Return: - returns nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		while (*str != '\0')
		{
			printf("%c", *str);
			str++;
		}
		if (i != n - 1 && separator != NULL)
			printf("%c ", *separator);
		if (str == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(arg);
}

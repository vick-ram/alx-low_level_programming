#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *print_all - prints all types
  *@format: - char type
  *Return: - returns nothing
  */
void print_all(const char * const format, ...)
{
	int n, index = 0;
	char c;
	float f;
	char *s;
	va_list arg;
	char sep = ',';

	va_start(arg, format);
	while (format && format[index] != '\0')
	{
		if (format[index] == 'c')
		{
			c = va_arg(arg, int);
			printf("%c", c);
		}
		else if (format[index] == 'd')
		{
			n = va_arg(arg, int);
			printf("%d", n);
		}
		else if (format[index] == 'f')
		{
			f = va_arg(arg, double);
			printf("%f", f);
		}
		else if (format[index] == 's')
		{
			s = va_arg(arg, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		if (format[index + 1])
			printf("%c ", sep);
		index++;
	}
	va_end(arg);
	printf("\n");
}

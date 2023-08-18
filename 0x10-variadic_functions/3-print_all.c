#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_all - prints all types
  *@format: - char type
  *Return: - returns nothing
  */
void print_all(const char * const format, ...)
{
	int i, index = 0;
	char c, *s;
	float f;
	va_list arg;

	va_start(arg, format);
	while (format && format[index] != '\0')
	{
		if (format[index] == 'c')
		{
			c = va_arg(arg, int);
			printf("%c, ", c);
		}
			else if (format[index] == 'i')
		{
			i = va_arg(arg, int);
			printf("%d, ", i);
		}
		else if (format[index] == 'f')
		{
			f = va_arg(arg, double);
			printf("%f, ", f);
		}
		else if (format[index] == 's')
		{
			s = va_arg(arg, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s, ", s);
		}
		index++;
	}
	va_end(arg);
	printf("\n");
}

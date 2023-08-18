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
	while (format[index] != '\0')
	{
		switch(format[index])
		{
			case 'c':
				c = (char)va_arg(arg, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(arg, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(arg, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				index++;
				continue;
		}
		if (format[index + 1] != '\0')
			printf(", ");
		index++;
	}
	va_end(arg);
	printf("\n");
}

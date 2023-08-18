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
	char c, *s, *sep = "";
	float f;
	va_list arg;

	va_start(arg, format);
	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					c = (char)va_arg(arg, int);
					printf("%s%c", sep, c);
					break;
				case 'i':
					i = va_arg(arg, int);
					printf("%s%d", sep, i);
					break;
				case 'f':
					f = (float)va_arg(arg, double);
					printf("%s%f", sep, f);
					break;
				case 's':
					s = va_arg(arg, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					index++;
					continue;
			}
			sep = ", ";
			index++;
		}
	}
	printf("\n");
	va_end(arg);
}

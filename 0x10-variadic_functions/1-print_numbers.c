#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers - prints numbers
  *@separator: - char type param
  *@n: - int type param
  *Return: - returns nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if ((i != n - 1) && (separator != NULL))
			printf("%s ", separator);
	}
	va_end(arg);
	printf("\n");
}

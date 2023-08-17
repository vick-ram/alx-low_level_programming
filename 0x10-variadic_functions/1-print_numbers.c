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
	int num;

	if (separator == NULL)
		return;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);
		if (i != n - 1)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(arg);
}

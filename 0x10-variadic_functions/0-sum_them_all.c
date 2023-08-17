#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
  *sum_them_all - calculates sum of its parameters
  *@n: - number of arguments param
  *Return: - returns sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, unsigned int);
	}
	va_end(arg);
	return (sum);
}

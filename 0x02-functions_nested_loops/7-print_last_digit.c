#include "main.h"
/**
  *print_last_digit - determines last digit of an integer
  *@n: - integer number
  *Return: - returns the last digit of a number
  */
int print_last_digit(int n)
{
	int ld = (n % 10);

	return (ld);
	_putchar('\n');
}

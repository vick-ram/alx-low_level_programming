#include "main.h"
/**
  *print_sign - determines sign of a number
  *@n: - a number
  *Return: - returns sign of a number then the number, separated by a comma
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
	}
	_putchar('\n');
}

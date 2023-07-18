#include "main.h"
/**
  *_abs - finds absolute value
  *@n: an integer number
  *Return: - returns 1 if n>0 and +ve if n is -ve
  */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
	_putchar('\n');
}

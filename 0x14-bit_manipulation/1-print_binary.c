#include "main.h"
/**
  *print_binary - prints binary rep of a number
  *@n: - int type param
  *Return: - returns nothing
  */
void print_binary(unsigned long int n)
{
	int count, leading_zero = 1, i;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	count = sizeof(unsigned long int) * 8;
	for (i = count - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if ((n & mask) != 0)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
			_putchar('0');
	}
}

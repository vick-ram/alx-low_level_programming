#include "main.h"
/**
  *print_diagonal - prints a diagonal line
  *@n: - length of line
  *Return: - returns nothing
  */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

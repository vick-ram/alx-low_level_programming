#include "main.h"
/**
  *print_times_table - times table
  *@n: - an integer
  *Return - nothing
  */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j != 0 && i != 0)
				{
				_putchar(',');
				_putchar(' ');
				}
				k = i * j;
				if (k <= 99)
				{
					_putchar(' ');
				}
				if (k <= 9)
				{
					_putchar(' ');
				}
				if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar((k / 100) % 10 + '0');
				}
				else if (k <= 99 && k >= 10)
				{
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

#include "main.h"
/**
  *print_line - draws a line
  *@n: length of a line
  *Return: - returns nothing
  */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

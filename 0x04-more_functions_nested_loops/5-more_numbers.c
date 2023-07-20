#include "main.h"
/**
  *more_numbers - prints numbers 0 to 14 ten times
  *Return: - returns nothing
  */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}

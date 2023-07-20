#include "main.h"
/**
  *print_most_numbers - prints numbers from 0 to 9 but skips 2 and 4
  *Return: returns nothing
  */
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}

#include "main.h"
/**
  *power - finds powers of ints
  *@base: - int type
  *@exp: - int type
  *Return: - returns result
  */
int power(int base, int exp)
{
	int result = 1;

	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}
/**
  *print_number - prints integers using putchar
  *@n: = integer type
  *Return: - returns 0
  */
void print_number(int n)
{
	int numDigits = 0;
	int temp;
	char digitChar;
	int i;
	int digit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	temp = n;
	while (temp != 0)
	{
		numDigits++;
		temp /= 10;
	}
	for (i = numDigits - 1; i >= 0; i--)
	{
		digit = (n / power(10, i)) % 10;

		digitChar = '0' + digit;
		_putchar(digitChar);
	}
}

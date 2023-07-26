#include "main.h"
/**
  *printDigit - prints a single digit
  *@digit: - int type
  *Return: - returns nothing
  */
void printDigit(int digit)
{
	_putchar('0' + digit);
}
/**
  *print_number - prints numbers
  *@n: - Int type
  *Return: - returns nothing
  */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	printDigit(num % 10);
}

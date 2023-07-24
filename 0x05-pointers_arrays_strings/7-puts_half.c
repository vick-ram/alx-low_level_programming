#include "main.h"
/**
  *puts_half - prints second half of a string
  *@str: - char type
  *Return: - returns nothing
  */
void puts_half(char *str)
{
	int len = 0;
	int mid, i;
	char *ptr = str;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	mid = len / 2;
	for (i = mid; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

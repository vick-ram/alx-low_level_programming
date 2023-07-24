#include "main.h"
/**
  *puts2 - print any other character starting from 0
  *@str: - char type
  *Return: - returns nothing
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	i = len - 1;
	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

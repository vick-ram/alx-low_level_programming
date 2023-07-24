#include "main.h"
/**
  *puts2 - print any other character starting from 0
  *@str: - char type
  *Return: - returns nothing
  */
void puts2(char *str)
{
	if (str == 0)
	{
		return;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

#include "main.h"
/**
  *_puts - prints a string
  *@str: - char type
  *Return: - returns nothing
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

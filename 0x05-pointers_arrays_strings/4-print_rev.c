#include "main.h"
/**
  *print_rev - prints string in reverse order
  *@s: - char type param
  *Return: - returns nothing
  */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

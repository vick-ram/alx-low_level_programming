#include "main.h"
/**
  *print_rev - prints string in reverse order
  *@s: - char type param
  *Return: - returns nothing
  */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	print_rev(s + 1);
	_putchar(*s);
}

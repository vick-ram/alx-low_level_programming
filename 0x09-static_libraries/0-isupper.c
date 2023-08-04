#include "main.h"
/**
  *_isupper - finds uppercase or lowercase of letters
  *@c: - a letter represents return type
  *Return: - returns 1 if uppercase or otherwise
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

#include "main.h"
/**
  *_isdigit - checks for digit 0 to 9
  *@c: - determines return type
  *Return: - returns 1 if digit and 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
		return (0);
	_putchar('\n');
}

#include "main.h"
/**
  *_isalpha - to return a not alphabet
  *@c: - The ASCII character code
  *Return: - returns 1 if c is alphabet and 0 if not alphabet
  */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}

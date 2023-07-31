#include "main.h"
/**
  *_strpbrk - seraches for any set of bytes
  *@s: - char type param
  *@accept: - char type param
  *Return: - returns a pointer to a byte in s
  */
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}

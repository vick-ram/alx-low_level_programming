#include "main.h"
/**
  *_strpbrk - seraches for any set of bytes
  *@s: - char type param
  *@accept: - char type param
  *Return: - returns a pointer to a byte in s
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}

#include "main.h"
/**
  *_memset fills the buffer n with type char b pointed by pointer *s
  *@s: - char type pointer
  *@b: - char type values
  *@n: - integer type buffer
  *Return: - returns pointer s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

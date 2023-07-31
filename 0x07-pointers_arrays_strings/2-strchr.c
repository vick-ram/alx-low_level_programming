#include "main.h"
/**
  *_strchr - locates character in a string
  *@s: - char type
  *@c: - char type param
  *Return: - returns pointer to the first occurrence
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

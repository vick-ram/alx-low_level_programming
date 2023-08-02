#include "main.h"
/**
  *wildcmp_recursive - recursively compares two strings
  *@s1: - char type param
  *@s2: - char type param
  *Return: - returns the match of string as 1 else 0
  */
int wildcmp_recursive(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			s2++;
		if (*s1 == '\0')
			return (wildcmp_recursive(s1, s2 + 1));
		if (wildcmp_recursive(s1, s2 + 1))
			return (1);
		return (wildcmp_recursive(s1 + 1, s2));
	}
	if (*s1 == *s2)
		return (wildcmp_recursive(s1 + 1, s2 + 1));
	return (0);
}
/**
  *wildcmp - compares two strings
  *@s1: char type param
  *@s2: char type param
  *Return: returns 1 if strings are identical and 0 otherwise
  */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2));
}

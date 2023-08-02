#include "main.h"
/**
  *_strlen_recursion - length of a string
  *@s: - char type param
  *Return: - returns length
  */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}

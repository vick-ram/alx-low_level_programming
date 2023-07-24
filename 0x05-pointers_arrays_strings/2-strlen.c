#include "main.h"
/**
  *_strlen - length of a string
  *@s: - character type param
  *Return: - returns string length
  */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

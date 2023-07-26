#include "main.h"
/**
  *rot13 - encodes a string using rot13
  *@str: - char type
  *Return: - returns the encoded string
  */
char *rot13(char *str)
{
	int i = 0;
	char ch;

	while (str[i] != '\0')
	{
		ch = str[i];
		if (ch >= 'A' && ch <= 'Z')
		{
			str[i] = 'A' + (ch - 'A' + 13) % 26;
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			str[i] = 'a' + (ch - 'a' + 13) % 26;
		}
		i++;
	}
	return (str);
}

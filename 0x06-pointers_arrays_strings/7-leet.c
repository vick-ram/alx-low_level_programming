#include "main.h"
/**
  *leet - encodes a string to 1337
  *@ch: - char type
  *Return: - returns encoded character
  */
char *leet(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] == 'a' || ch[i] == 'A')
		{
			ch[i] = '4';
		}
		else if (ch[i] == 'e' || ch[i] == 'E')
		{
			ch[i] = '3';
		}
		else if (ch[i] == 'o' || ch[i] == 'O')
		{
			ch[i] = '0';
		}
		else if (ch[i] == 't' || ch[i] == 'T')
		{
			ch[i] = '7';
		}
		else if (ch[i] == 'l' || ch[i] == 'L')
		{
			ch[i] = '1';
		}
		i++;
	}
	return (ch);
}

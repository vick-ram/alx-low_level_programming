#include "main.h"
/**
  *isDigit - finds if ts a digit
  *@c: - char type
  *Return: - returns numbers
  */
int isDigit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
  *cap_string - capitalize a string
  *@ch: - char type param
  *Return: - returns the string
  */
char *cap_string(char *ch)
{
	int i = 0;
	int capitalizeNext = 1;

	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z' && capitalizeNext)
		{
			if (i == 0 || !isDigit(ch[i - 1]))
			{
				ch[i] = ch[i] -('a' - 'A');
			}
			capitalizeNext = 0;
		}
		else if (ch[i] >= 'A' && ch[i] <= 'Z')
		{
			capitalizeNext = 0;
		}
		else if (ch[i] == ' ' || ch[i] == '.')
		{
			capitalizeNext = 1;
			while (ch[i] == ' ' || ch[i] == '.')
			{
				i++;
			}
			if (ch[i] == '\0')
			{
				break;
			}
			i--;
		}
		i++;
	}
	return (ch);
}

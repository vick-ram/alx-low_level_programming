#include "main.h"
/**
  *leet - encodes a string to 1337
  *@ch: - char type
  *Return: - returns encoded character
  */
char *leet(char *ch)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ch[i] == s1[j])
			{
				ch[i] = s2[j];
			}
		}
	}
	return (ch);
}

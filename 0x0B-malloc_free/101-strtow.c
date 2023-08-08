#include <stdlib.h>
#include "main.h"
/**
  *word_count - counts the number of words in a string
  *@s: - char type param
  *Return: - returns count
  */
int word_count(char *s)
{
	int state, c = 0, d = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			d++;
		}
	}
	return (d);
}
/**
  *strtow - splits a string into words
  *@str: - char type param
  *Return: - returns pointer to an array of strings else NULL
  */
char **strtow(char *str)
{
	char **m, *temp;
	int i, j = 0, length = 0, words, c = 0, s, e;

	while (*(str + length))
		length++;
	words = word_count(str);
	if (words == 0)
		return (NULL);
	m = (char **)malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				temp = (char *)malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (s < e)
					*temp++ = str[s++];
				*temp = '\0';
				m[j] = temp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = i;
	}
	m[j] = NULL;
	return (m);
}

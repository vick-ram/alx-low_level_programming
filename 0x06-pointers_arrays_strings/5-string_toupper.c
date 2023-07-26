#include "main.h"
/**
  *string_toupper - changes lowercase to uppercase
  *@ch: - char type
  *Return: - return the ch
  */
char *string_toupper(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - ('a' - 'A');
		}
		i++;
	}
	return (ch);
}

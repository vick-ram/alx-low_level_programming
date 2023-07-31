#include "main.h"
/**
  *set_string - sets the value of a pointer to a char
  *@s: - double pointer of type char
  *@to: - char type param
  *Return: - returns nothing
  */
void set_string(char **s, char *to)
{
	int len = 0;

	while (to[len] != '\0')
	{
		len++;
	}
	*s = to;
}

#include "main.h"
/**
  *_atoi - prints strings to integers
  *@s: - pointer to char type
  *Return: - returns an integer type
  */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int hasSign = 0;

	while (*s)
	{
		if (*s == ' ' || *s == '+' || *s == '-')
		{
			hasSign = 1;
			sign = (*s == '-') ? -1 : 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			break;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return ((hasSign) ? (result * sign) : result);
}

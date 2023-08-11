#include "main.h"
#include <stdlib.h>
/**
  *isDigitString - checks if string is in digits only
  *@str: - char type param
  *Return: - returns 1 for success
  */
int isDigitString(char *str)
{
	char *ptr;

	for (ptr = str; *ptr != '\0'; ptr++)
	{
		if (*ptr < '0' || *ptr > '9')
			return (0);
	}
	return (1);
}
/**
  *multiply - multiplies two numbers
  *@num1: - int type param
  *@num2: - int type param
  *Return: - return multiple
  */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
	return (num1 * num2);
}

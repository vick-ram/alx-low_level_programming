i#include <stdio.h>
#include "main.h"
/**
  *print_to_98 - prints numbers to 98 either way
  *@n: - an integer type
  *Return: - return numbers to 98
  */
void print_to_98(int n)
{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}

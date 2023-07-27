#include "main.h"
#include <stdio.h>
/**
  *print_buffer - prints contents of buffer from size
  *@b: - char type param
  *@size: - int type param
  *Return: - returns nothing
  */
void print_buffer(char *b, int size)
{
	int m = 0, i, j, c, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (m < size)
	{
		j = size - m < 10 ? size - m : 10;
		printf("%08x: ", m);
		k = *(b + m + i);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("02x", k);
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			c = *(b + m + i);
			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		m += 10;
	}
}

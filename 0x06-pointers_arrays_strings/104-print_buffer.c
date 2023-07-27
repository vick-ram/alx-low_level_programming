#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
  *print_buffer - prints contents of buffer from size
  *@b: - char type param
  *@size: - int type param
  *Return: - returns nothing
  */
void print_buffer(char *b, int size)
{
	int i, j;
	char c;

	if (size <= 0)
		printf("\n");
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j += 2)
		{
			if (i + j < size)
			{
				printf("%02x", (unsigned char)b[i + j]);
				if (i + j + 1 < size)
				{
					printf("%02x ", (unsigned char)b[i + j + 1]);
				}
				else
					printf("    ");
			}
			else
				printf("     ");
		}
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				c = b[i + j];
				if (isprint(c))
					printf("%c", c);
				else
					printf(".");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}

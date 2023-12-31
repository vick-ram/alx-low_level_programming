#include "main.h"
#include <stdio.h>
/**
  *print_array - prints array of ints
  *@a: - int type
  *@n: - contained int numbers
  *Return: - returns nothing
  */
void print_array(int *a, int n)
{
	int i, num, index = 0;
	char buffer[12];

	if (a == (int *)-1 || n == -1)
		return;
	if (n == 0)
		putchar('\n');
	for (i = 0; i < n; i++)
	{
		num = a[i];
		if (num < 0)
		{
			putchar('-');
			num = -num;
		}
		if (num == 0)
			putchar('0');
		else
		{
			while (num > 0)
			{
				buffer[index++] = '0' + (num % 10);
				num /= 10;
			}
			while (index > 0)
				putchar(buffer[--index]);
		}
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

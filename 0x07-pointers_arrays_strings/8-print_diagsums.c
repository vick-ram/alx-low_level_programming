#include "main.h"
#include <stdio.h>
/**
  *print_diagsums - prints the sum of two diagonals of square matrix
  *@a: - int type param
  *@size: - int type size param
  *Return: - returns nothing
  */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

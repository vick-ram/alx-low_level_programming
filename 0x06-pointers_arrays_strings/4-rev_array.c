#include "main.h"
/**
  *reverse_array - reverses an array
  *@a: - an array of type int param
  *@n: - size of an array
  *Return: - returns nothing
  */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

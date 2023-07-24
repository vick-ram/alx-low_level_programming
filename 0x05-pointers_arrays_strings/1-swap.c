#include "main.h"
/**
  *swap_int - swaps integer numbers
  *@a: - Int type
  *@b: - Int type
  *Return: - returns nothing
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

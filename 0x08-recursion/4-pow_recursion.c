#include "main.h"
/**
  *_pow_recursion - returns the power of a number
  *@x: - int type param
  *@y: - int type param
  *Return: - returns power of a number
  */
int _pow_recursion(int x, int y)
{
	int temp;

	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	temp = _pow_recursion(x, y - 1);
	if (temp == -1)
		return (-1);
	return (x * temp);
}

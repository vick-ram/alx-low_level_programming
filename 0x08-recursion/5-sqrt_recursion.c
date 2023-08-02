#include "main.h"
/**
  *_sqrt_recursive - from a guess
  *@n: - int type param
  *@numGuess: - int type
  *Return: - returns square
  */
int _sqrt_recursive(int n, int numGuess)
{
	int sq = numGuess * numGuess;

	if (sq == n)
		return (numGuess);
	if (sq > n)
		return (-1);
	return (_sqrt_recursive(n, numGuess + 1));
}
/**
  *_sqrt_recursion - finds squareroot
  *@n: - int type param
  *Return: - returns squareroot
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursive(n, 1));
}

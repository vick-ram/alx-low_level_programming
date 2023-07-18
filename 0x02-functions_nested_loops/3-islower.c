#include "main.h"
/**
 *_islower - to be called by main
 *Description: - checks for lowercase
 *@c: - The character in ASCIIS code table
 *Return: - return 1 if lowercase and 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

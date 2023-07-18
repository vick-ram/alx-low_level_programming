#include "main.h"
/**
 *print_alphabet_x10 - alphabets 10 times
 *Description: - prints alphabets a to z in lowercase 10 times
 *Return: - no return value
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
}

#include <stdio.h>
/**
*print_alphabet - prints alphabets
*Description: - prints alphabets in lowercase
*Return: - nothing
*/
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
	}
	putchar('\n');
}
/**
 *main - Entry point
 *Description: - calls the function that prints alphabets
 *Return: - always return 0
 */
int main(void)
{
	void print_alphabet(void);
	return (0);
}

#include "main.h"
/**
  *rot13 - encodes a string using rot13
  *@str: - char type
  *Return: - returns the encoded string
  */
char *rot13(char *str)
{
	int i, j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxwzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data[j])
			{
				str[i] = datarot[j];
				break;
			}
		}
	}
	return (str);
}

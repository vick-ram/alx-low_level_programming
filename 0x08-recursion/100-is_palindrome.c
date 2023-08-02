#include "main.h"
/**
  *string_length - find length of a string
  *@s: char type param
  *Return: - returns length
  */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}
/**
  *compare_chars - compares characters fro start to end
  *@s: - char type param
  *@start: - int type pram
  *@end: - end int type
  *Return: - returns chars
  */
int compare_chars(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (compare_chars(s, start + 1, end - 1));
}
/**
  *is_palindrome_recursive - recursively checks for palindrome
  *@s: char type param
  *Return: returns recursive char from both ends
  */
int is_palindrome_recursive(char *s)
{
	int len = string_length(s);

	return (compare_chars(s, 0, len - 1));
}
/**
  *is_palindrome - checks for palindrome
  *@s: - char type param
  *Return: - return 1 if is palindrome and 0 otherwise
  */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_palindrome_recursive(s));
}

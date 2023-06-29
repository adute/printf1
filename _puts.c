#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @c: the character
 *
 * Return: 1 on SUCCESS
 * -1 on fail
 */
int _putchar(char c)
{
	static int count;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || count >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, count);
		count = 0;
	}
	if (c != BUF_FLUSH)
	{
		buf[count++] = c;
	}
	return (1);
}

/**
 * _puts - prints a string followed by newline
 * @str: the string to be pronted
 * Return: 0
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
	{
		_putchar(*str++);
	}
	return (str - a);
}

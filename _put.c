#include "main.h"

/**
 * _puts ---> prints a string with newline
 * @str: string to print
 *
 * Return: 0
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar --->character c to stdout
 * @c: character to print
 *
 * Return: 1 if success
 * on fail, -1
 */
int _putchar(int c)
{
	static int count;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || count >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, count);
		count = 0;
	}
	if (c != BUF_FLUSH)
		buf[count++] = c;
	return (1);
}

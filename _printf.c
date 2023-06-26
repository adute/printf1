#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: is a character string, composed of zero or more directivrs
 * Return: the number of characters printed (excluding the NULL
 * byte used to end output to strings)
 * write output to stdout, the standard output stream
 * handle specifiers c, s, %
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char c;

	va_start (ap, format);
	while (*format != '\0')
	{
	if (*format == 'c')
	c = va_arg (ap, int);
	write (1, &c, 1);
	}
return (0);
}

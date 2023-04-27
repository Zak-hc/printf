#include "main.h"
/**
 * _printf - Printf a function
 * @format: our first arg
 * Return: return its slf
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
if (format == NULL  || (format[0] == '%' && format[1] == '\0')  ||
(format[0] == '%' && format[1] == ' ' && format[2] == '\0'))
return (-1);
va_start(args, format);
count += _print(format, args);
va_end(args);
return (count);
}

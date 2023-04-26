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
int i;
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
switchh(format[i], args);
}
else
count += print_char(format[i]);
}
va_end(args);
return (count);
}

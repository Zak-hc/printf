#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - Printf a function
 * @format: our first arg
 * Return: return its slf
 *
int _printf(const char *format, ...)
{
va_list args;
char percent;
char to[100];
int i, count = 0;
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{i++;
switch (format[i])
{case 'd':
case 'i':
sprintf(to, "%d", va_arg(args, int));
count += print_str(to);
break;
default:
percent = '%';
write(1, &percent, sizeof(char));
write(1, &format[i], sizeof(char));
count += 2;
break;
}}
else
count += print_char(format[i]);
}
va_end(args);
return (count);
}

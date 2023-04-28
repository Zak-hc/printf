#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include  <stdlib.h>
/**
 * _printf - Printf a function
 * @format: our first arg
 * Return: return its slf
 */
int _printf(const char *format, ...)
{
va_list args;
int count;
int i, count = 0;
char too[100], *to;
if (format == NULL  || (format[0] == '%' && format[1] == '\0')  ||
(format[0] == '%' && format[1] == ' ' && format[2] == '\0'))
return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{i++;
switch (format[i])
{case 'd': case 'i':
sprintf(too, "%d", va_arg(args, int));
count += print_str(too);
break;
case 'c':
count += print_char(va_arg(args, int));
break;
case 's':
to = va_arg(args, char *);
if (to == NULL)
count += print_str("(null)");
else
count += print_str(to);
break;
case '%':
count += print_char('%');
break;
default:
count += print_char('%');
count += print_char(format[i]);
break;
}}
else
count += print_char(format[i]);
}
va_end(args);
return (count);
}


/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{
va_list args;
char percent;
int count = 0;
va_start(args, format);
for (; *format != '\0'; format++)
{
if (*format == '%')
{format++;
switch (*format)
{case 'c':
count += print_char(va_arg(args, int));
break;
case 's':
count += print_str(va_arg(args, char *));
break;
case '%':
percent = '%';
count += print_char(percent);
break;
default:
percent = '%';
write(1, &percent, sizeof(char));
write(1, format, sizeof(char));
break;
}}
else
count += print_char(*format);
}
va_end(args);
return (count);
}

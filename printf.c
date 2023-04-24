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
char *s;
int c;
int count = 0;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
{
c = va_arg(args, int);
write(1, &c, sizeof(char));
count++;
break;
}
case 's':
{
s = va_arg(args, char *);
while (*s != '\0')
{
write(1, s, sizeof(char));
s++;
count++;
}
break;
}
case '%':
{
percent = '%';
write(1, &percent, sizeof(char));
count++;
break;
}
default:
{
percent = '%';
write(1, &percent, sizeof(char));
write(1, format, sizeof(char));
break;
}
}
}
else
{
write(1, format, sizeof(char));
count++;
}
format++;
}
va_end(args);
return count;
}

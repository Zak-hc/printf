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
int c = va_arg(args, int);
write(1, &c, sizeof(char));
count++;
break;
}
case 's':
{
char *s = va_arg(args, char *);
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
char percent = '%';
write(1, &percent, sizeof(char));
count++;
break;
}
default:
{
write(1, format, sizeof(char));
count++;
break;
}
}
}
else
{
// Write the character as is
write(1, format, sizeof(char));
count++;
}
format++;
}
va_end(args);
return count;
}

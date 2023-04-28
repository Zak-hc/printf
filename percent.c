#include "main.h"
/**
 * _print - Printf function
 * @format: format string
 * @args: variable arguments list
 * Return: the number of characters printed, or -1 if an error occurred
 */
int _print(const char *format, va_list args)
{
int i, count = 0;
char too[100], *to;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{i++;
switch (format[i])
{
case 'b':
count += b(args);
break;
case 'd': case 'i':
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
return (count);
}

#include <stdio.h>
#include <stdarg.h>
/**
 *my_sprintf- function that convert int to char
 *@buffer: the char that help our fun
 *@format: our first arg in the virtuel printf
*/ 
void my_sprintf(char *buffer, const char *format, ...)
{
va_list args;
va_start(args, format);
while (*format)
{
if (*format != '%')
{
*buffer++ = *format++;
}
else
{
if (*(format + 1) == 's')
{
format++;
char *str = va_arg(args, char*);
while (*str)
{
*buffer++ = *str++;
}
format++;
}
else
{
*buffer++ = *format++;
}
}
}
*buffer = '\0';
va_end(args);
}

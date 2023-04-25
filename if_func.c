#include "main.h"
/**
 *ifif- im her against betty
 *@format: im her frd
 *Return: jdjk 0 hdhd -1
*/
int ifif(const char *format)
{
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
return (-1);
return (-1);
}

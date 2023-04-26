#include "main.h"
/**
 *switchh - Printf function
 *@f: hhdhhd
 *@args: hgfgfff
*/
void switchh(char f, va_list args)
{
int count = 0;
char too[100], *to;
switch (f)
{case 'd':
case 'i':
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
count += print_char(f);
break;
}
}

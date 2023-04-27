#include "main.h"
int b(va_list args)
{
int tab[33];
int number = va_arg(args, unsigned int);
int i, count = 0;
unsigned int sum;
unsigned int div = number;
char *affich = NULL;
sum = 0;
for (i = 0; i < 32 ; i++)
{
if (sum >= div)
break;
tab[i] = (number % 2) ? 1 : 0;
sum +=  2 ^ i * tab[i];
number /= 2;
count++;
sprintf(affich, "%d", tab[i]);
print_char(*affich);
}
return (count);
}


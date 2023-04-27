#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 * b - fonction to entry.
 * @args: agruments
 * Return: number of characters
 */
int b(va_list args)
{
int tab[33];
int number = va_arg(args, int);
int i, count = 0;
int sum;
int div = number;
char *affich = malloc(sizeof(char) * 33);
sum = 0;
for (i = 0; i < 32 ; i++)
{
if (sum >= div ||
sum >= INT_MAX - ((2 ^ i) * tab[i]))
{
break;
}
tab[i] = (number % 2) ? 1 : 0;
sum += (2 ^ i) * tab[i];
number /= 2;
count++;
sprintf(&affich[i], "%d", tab[i]);
print_char(affich[i]);
}
free(affich);
return (count);
}



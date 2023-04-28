int b(va_list args)
{
int q;
int number = va_arg(args, int);
int tab[32];
int i, j;
char affich[33];

if (number < 0)
{
number = -number;
print_char('-');
}
for (i = 0; i < 32 && number != 0; i++) {
tab[i] = number % 2;
number /= 2;
}
q = 0;
for (j = i-1 ; j >= 0; j--)
{
sprintf(&affich[q], "%d", tab[j]);
print_char(affich[q]);
q++;

}
return (i-1);
}

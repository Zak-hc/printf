#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
 *print_char- Fonction pour imprimer un caractère
 *@c : Le caractère à imprimer
 *Return: 1 en cas de succès, -1 en cas d'erreur
 */
int print_char(char c)
{
write(1, &c, sizeof(char));
return (1);
}

/**
 *print_str- pour imprimer une chaîne de caractères
 *@str : La chaîne de caractères à imprimer
 *Return: 0 le nombre de caractères imprir
 */
int print_str(const char *str)
{
int i;
if (!str)
{
str = "(null)";
}
else
for (i = 0; str[i] != '\0'; i++)
{
print_char(str[i]);
}
return (i);
}

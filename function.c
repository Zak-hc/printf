#include "main.h"
#include <stdio.h>
/**
 *print_char- Fonction pour imprimer un caractère
 *@c : Le caractère à imprimer
 *return : Retourne 1 en cas de succès, -1 en cas d'erreur
 */
int print_char (char c)
{
if (!c)
return (-1);
write (1, &c, sizeof(char));
return (1);
}

/**
 *print_str- pour imprimer une chaîne de caractères
 *@str : La chaîne de caractères à imprimer
 *return : Retourne le nombre de caractères imprimés en cas de succès, -1 en cas d'erreur
 */
int print_str (char *str)
{
int i;
if (!str)
return (-1);
for (i = 0; str[i] != '\0'; i++)
print_char (str[i]);
return (i);
}


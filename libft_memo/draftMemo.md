L'arithmétique des pointeurs en C est une opération qui permet de manipuler les adresses de mémoire de manière contrôlée et est étroitement liée aux types de données pointés. Voici un aperçu des bases :

1. Concept de base
Un pointeur est une variable qui stocke l'adresse d'une autre variable. Si vous avez un pointeur sur un type de données, comme int, l'arithmétique des pointeurs effectue des calculs basés sur la taille du type de données pointé.

Par exemple, si la taille de int est de 4 octets :

Incrémenter un pointeur (p++) fait avancer l'adresse de 4 octets.
De même, décrémenter (p--) diminue l'adresse de 4 octets.
2. Opérations autorisées
Les opérations courantes avec les pointeurs incluent :

Incrémentation (p++) : Passe à l'adresse suivante.
Décrémentation (p--) : Revient à l'adresse précédente.
Addition (p + n) : Avance de n emplacements.
Soustraction (p - n) : Recule de n emplacements.
Différence entre deux pointeurs : Si les deux pointeurs appartiennent à un même tableau, leur différence donne le nombre d'éléments entre eux.
3. Exemple
Voici un exemple pratique :

c

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // Pointeur sur le premier élément

    printf("Adresse initiale : %p, Valeur : %d\n", (void *)p, *p);

    p++; // Avancer d'un élément
    printf("Adresse après p++ : %p, Valeur : %d\n", (void *)p, *p);

    p += 2; // Avancer de 2 éléments
    printf("Adresse après p+=2 : %p, Valeur : %d\n", (void *)p, *p);

    p--; // Reculer d'un élément
    printf("Adresse après p-- : %p, Valeur : %d\n", (void *)p, *p);

    return 0;
}
Sortie possible (les adresses exactes varient selon l'exécution) :

yaml

Adresse initiale : 0x7ffed6b7c410, Valeur : 10
Adresse après p++ : 0x7ffed6b7c414, Valeur : 20
Adresse après p+=2 : 0x7ffed6b7c41c, Valeur : 40
Adresse après p-- : 0x7ffed6b7c418, Valeur : 30
4. Important :
Compatibilité des types : L'arithmétique des pointeurs dépend du type de données pointé. Un pointeur int se déplace par incréments de 4 octets si sizeof(int) == 4, alors qu'un pointeur char se déplace par incréments de 1 octet.
Accès hors limites : Il est dangereux d'utiliser un pointeur pour accéder à des zones de mémoire hors des limites d'un tableau. Cela peut provoquer des comportements indéfinis.
Pointeurs vers void : L'arithmétique directe n'est pas permise sur un pointeur void car sa taille n'est pas définie.
5. Différence entre deux pointeurs
Lorsque deux pointeurs pointent dans le même tableau, leur soustraction donne le nombre d'éléments qui les sépare.

Exemple :

c

int arr[] = {10, 20, 30, 40, 50};
int *p1 = &arr[1]; // Pointeur sur 20
int *p2 = &arr[4]; // Pointeur sur 50

printf("Différence : %ld\n", p2 - p1); // Résultat : 3
Applications courantes
Parcourir un tableau
Manipuler des structures de données comme des chaînes de caractères (char*)
Implémenter des algorithmes basés sur des indices de mémoire.
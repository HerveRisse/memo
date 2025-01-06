#include <stdio.h>
#include <stdarg.h>
#include <string.h>

// Fonction qui additionne un nombre variable d'entiers
int somme(int nombre, ...) {
    int total = 0;
    va_list args;

    va_start(args, nombre);
    for (int i = 0; i < nombre; i++) {
        total += va_arg(args, int);
    }
    va_end(args);
    
    return total;
}

// Fonction qui trouve le maximum parmi un nombre variable d'entiers
int maximum(int nombre, ...) {
    if (nombre <= 0) return 0;
    
    va_list args;
    va_start(args, nombre);
    
    int max = va_arg(args, int);
    for (int i = 1; i < nombre; i++) {
        int val = va_arg(args, int);
        if (val > max) max = val;
    }
    
    va_end(args);
    return max;
}

// Fonction qui concatène des chaînes de caractères
void concat_strings(char* dest, int nombre, ...) {
    va_list args;
    va_start(args, nombre);
    
    dest[0] = '\0';  // Initialiser la chaîne de destination
    
    for (int i = 0; i < nombre; i++) {
        strcat(dest, va_arg(args, char*));
    }
    
    va_end(args);
}

// Exemple d'utilisation de va_copy
void print_twice(int nombre, ...) {
    va_list args1, args2;
    
    va_start(args1, nombre);
    va_copy(args2, args1);  // Copier args1 dans args2
    
    printf("Premier passage: ");
    for (int i = 0; i < nombre; i++) {
        printf("%d ", va_arg(args1, int));
    }
    
    printf("\nDeuxième passage: ");
    for (int i = 0; i < nombre; i++) {
        printf("%d ", va_arg(args2, int));
    }
    printf("\n");
    
    va_end(args1);
    va_end(args2);
}

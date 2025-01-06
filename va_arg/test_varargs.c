#include <stdio.h>
#include <string.h>
#include "varargs_examples.c"

void test_somme() {
    printf("Test de la fonction somme...\n");
    int resultat;
    
    resultat = somme(3, 1, 2, 3);
    if (resultat != 6) {
        printf("ERREUR: somme(3, 1, 2, 3) = %d, attendu: 6\n", resultat);
        return;
    }
    
    resultat = somme(4, 4, 5, 6, 7);
    if (resultat != 22) {
        printf("ERREUR: somme(4, 4, 5, 6, 7) = %d, attendu: 22\n", resultat);
        return;
    }
    
    resultat = somme(1, 42);
    if (resultat != 42) {
        printf("ERREUR: somme(1, 42) = %d, attendu: 42\n", resultat);
        return;
    }
    
    resultat = somme(2, -1, 1);
    if (resultat != 0) {
        printf("ERREUR: somme(2, -1, 1) = %d, attendu: 0\n", resultat);
        return;
    }
    
    printf("Tests de somme réussis!\n\n");
}

void test_maximum() {
    printf("Test de la fonction maximum...\n");
    int resultat;
    
    resultat = maximum(3, 1, 2, 3);
    if (resultat != 3) {
        printf("ERREUR: maximum(3, 1, 2, 3) = %d, attendu: 3\n", resultat);
        return;
    }
    
    resultat = maximum(4, 4, 5, 6, 7);
    if (resultat != 7) {
        printf("ERREUR: maximum(4, 4, 5, 6, 7) = %d, attendu: 7\n", resultat);
        return;
    }
    
    resultat = maximum(4, -1, -2, -3, -4);
    if (resultat != -1) {
        printf("ERREUR: maximum(4, -1, -2, -3, -4) = %d, attendu: -1\n", resultat);
        return;
    }
    
    resultat = maximum(1, 42);
    if (resultat != 42) {
        printf("ERREUR: maximum(1, 42) = %d, attendu: 42\n", resultat);
        return;
    }
    
    printf("Tests de maximum réussis!\n\n");
}

void test_concat_strings() {
    printf("Test de la fonction concat_strings...\n");
    char result[100];
    
    concat_strings(result, 3, "Hello", " ", "World");
    if (strcmp(result, "Hello World") != 0) {
        printf("ERREUR: concat_strings(\"Hello\", \" \", \"World\") = \"%s\", attendu: \"Hello World\"\n", result);
        return;
    }
    
    concat_strings(result, 4, "A", "B", "C", "D");
    if (strcmp(result, "ABCD") != 0) {
        printf("ERREUR: concat_strings(\"A\", \"B\", \"C\", \"D\") = \"%s\", attendu: \"ABCD\"\n", result);
        return;
    }
    
    printf("Tests de concat_strings réussis!\n\n");
}

void test_print_twice() {
    printf("Test de la fonction print_twice...\n");
    printf("Test avec 3 nombres :\n");
    print_twice(3, 1, 2, 3);
    printf("\nTest avec 4 nombres :\n");
    print_twice(4, 10, 20, 30, 40);
    printf("\nTests de print_twice terminés!\n\n");
}

int main() {
    printf("Début des tests...\n\n");
    
    test_somme();
    test_maximum();
    test_concat_strings();
    test_print_twice();
    
    printf("Tous les tests sont terminés!\n");
    return 0;
}

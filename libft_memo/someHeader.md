1. <unistd.h>

Cette bibliothèque fournit des fonctions et des constantes pour l'interface système POSIX.
Elle est couramment utilisée pour manipuler des fichiers et des processus.

Fonctions importantes :
Manipulation des fichiers :
read(), write(), close(), lseek()
Gestion des processus :
fork(), exec(), getpid(), getppid()
Autres :
access(), unlink(), isatty()


2. <stdio.h>

Cette bibliothèque standard fournit des fonctions d'entrée/sortie en C.

Fonctions importantes :
Entrée :
scanf(), fscanf(), gets() (déconseillé, remplacé par fgets())
Sortie :
printf(), fprintf(), puts(), putchar()
Manipulation des fichiers :
fopen(), fclose(), fwrite(), fread()


3. <stdlib.h>

Cette bibliothèque standard fournit des fonctions utilitaires générales.

Fonctions importantes :
Gestion mémoire :
malloc(), calloc(), realloc(), free()
Conversions :
atoi(), atof(), strtol(), strtod()
Gestion de l'exécution :
exit(), system(), abort()


4. <sys/types.h>

Cette bibliothèque définit des types utilisés dans les interfaces système.

Types importants :
pid_t : Représente l'ID d'un processus.
off_t : Représente les décalages dans les fichiers.
ssize_t : Représente une taille signée (souvent utilisée pour read() et write()).


5. <sys/stat.h>

Cette bibliothèque fournit des structures et des macros pour manipuler les informations sur les fichiers.

Fonctions importantes :
stat(), fstat() : Récupèrent les métadonnées d'un fichier.
Macros courantes :
S_ISREG(m), S_ISDIR(m), S_IRUSR, S_IWUSR, etc.


6. <fcntl.h>

Cette bibliothèque contient des constantes et des fonctions pour contrôler les fichiers.

Fonctions importantes :
Ouvrir des fichiers :
open(), fcntl()
Flags courants :
O_RDONLY, O_WRONLY, O_RDWR, O_CREAT, O_TRUNC, etc.


7. <stdint.h>

Cette bibliothèque définit des types entiers fixes (standardisée avec C99).

Types importants :
Types entiers signés :
int8_t, int16_t, int32_t, int64_t
Types entiers non signés :
uint8_t, uint16_t, uint32_t, uint64_t
Macros limites :
INT8_MAX, UINT16_MAX, INT64_MIN, etc.

Résumé de l'utilité :
Bibliothèque	Utilité principale
<unistd.h>	Interface système POSIX (fichiers, processus).
<stdio.h>	Entrée/sortie standard (I/O en C).
<stdlib.h>	Gestion mémoire, conversions, gestion de l'exécution.
<sys/types.h>	Types spécifiques au système (pid_t, off_t, etc.).
<sys/stat.h>	Métadonnées des fichiers (permissions, type, etc.).
<fcntl.h>	Flags et fonctions pour contrôler des fichiers.
<stdint.h>	Types d'entiers avec taille fixe (int8_t, uint32_t, etc.).
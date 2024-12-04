Un descripteur de fichier (file descriptor, fd) est une abstraction utilisée dans les systèmes d'exploitation de type Unix (comme Linux et macOS) pour représenter une référence à un fichier ou à une ressource d'entrée/sortie (I/O), comme un terminal, un socket réseau ou un canal inter-processus (pipe).

Concept de base :
Lorsqu'un fichier ou une ressource est ouvert, le système d'exploitation attribue un entier non signé appelé "descripteur de fichier" pour identifier cette ressource.
Ce descripteur est utilisé pour effectuer des opérations comme lire, écrire, ou fermer la ressource.
Descripteurs de fichiers standards :
En C et POSIX, trois descripteurs de fichiers sont ouverts par défaut pour chaque programme :

Nom	Descripteur	Utilisation
Entrée standard	0	Pour lire l'entrée utilisateur (ex : clavier).
Sortie standard	1	Pour afficher la sortie normale.
Erreur standard	2	Pour afficher les erreurs.


Exemple : Utilisation de write avec un descripteur de fichier
c

#include <unistd.h>

int main() {
    write(1, "Bonjour, Monde!\n", 16); // Écrit dans la sortie standard (fd = 1)
    write(2, "Erreur : un problème est survenu.\n", 34); // Écrit dans la sortie d'erreur (fd = 2)
    return 0;
}
Sortie :

Texte normal (fd = 1) s'affiche dans la console.
Texte d'erreur (fd = 2) s'affiche également dans la console, mais est souvent traité différemment (par ex., redirigeable séparément).


Fonctions liées aux descripteurs de fichiers

1. Ouverture de fichier : open

c

#include <fcntl.h>

int fd = open("fichier.txt", O_WRONLY | O_CREAT, 0644);
if (fd == -1) {
    // Gérer l'erreur
}
Retourne un descripteur (par exemple, fd = 3 si aucun autre fichier n'est ouvert après les trois descripteurs standards).
Flags :
O_RDONLY : Ouverture en lecture seule.
O_WRONLY : Ouverture en écriture seule.
O_RDWR : Lecture et écriture.
Permissions : 0644 signifie que le propriétaire peut lire/écrire et les autres peuvent lire.


2. Lecture et écriture : read et write

c

char buffer[100];
int bytes_read = read(fd, buffer, sizeof(buffer));
write(fd, "Hello", 5);
read(fd, buffer, size) lit jusqu'à size octets depuis fd dans buffer.
write(fd, buffer, size) écrit jusqu'à size octets depuis buffer dans fd.


3. Fermeture de fichier : close

c

close(fd);
Libère les ressources associées au fichier ou à la ressource ouverte.
Redirection des descripteurs :
Les descripteurs de fichiers peuvent être redirigés pour envoyer leur sortie ailleurs. Par exemple, en ligne de commande :


Rediriger la sortie standard vers un fichier :

bash

./programme > fichier.txt


Rediriger les erreurs vers un fichier :

bash

./programme 2> erreurs.txt

Résumé :
Descripteurs standards : 0 (entrée), 1 (sortie), 2 (erreur).
Fonctions importantes :
open, close, read, write.
Avantages :
Unifiés pour gérer diverses ressources (fichiers, sockets, pipes).
Compatibles avec des mécanismes comme la redirection.
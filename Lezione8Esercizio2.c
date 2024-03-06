#include <stdio.h>

int main()
{

    int numA; // La prima variabile
    int numB; // La seconda variabile
    float media;  // Sarà la media tra i due valori scelti dall'utente (float perchè può avere valori dopo la virgola)

    printf("Oggi faremo la media tra due numeri!\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("Inserisci il primo numero: \n"); // Stringa che leggerà l'utente
    scanf("%d", &numA);                    // Lettura del numero digitato dall'utente catturato in variabile "numA"

    printf("Inserisci il secondo numero: \n"); // Seconda stringa che leggerà l'utente
    scanf("%d", &numB);

    media = (numA+numB)/2; // L'operazione che si esegue (non verrà letto dall'utente)

    printf("La media tra %d e %d è: %.2f\n", numA, numB, media); // Risultato finale

/*
* Van Zwam Arjen 
*/

    return 0;
}
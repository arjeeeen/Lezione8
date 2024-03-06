#include <stdio.h>

int main()
{

    int numA; // La prima variabile
    int numB; // La seconda variabile
    int tot;  // Sarà la somma totale

    printf("Oggi moltiplicheremo due numeri!\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("Inserisci il primo numero: \n"); // Stringa che leggerà l'utente
    scanf("%d", &numA);                    // Lettura del numero digitato dall'utente catturato in variabile "numA"

    printf("Inserisci il secondo numero: \n"); // Seconda stringa che leggerà l'utente
    scanf("%d", &numB);

    tot = numA*numB; // L'operazione che si esegue (non verrà letto dall'utente)

    printf("La moltiplicazione tra %d e %d è: %d\n", numA, numB, tot); // Risultato finale


/*
* Van Zwam Arjen 
*/
    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int main() {
    char scelta;
    char nome[50];
    int punteggioTotale = 0;
    int risposta;

    do {
        printf("Quiz di cultura generale\n");
        printf("A) Iniziare una nuova partita\n");
        printf("B) Uscire dal gioco\n");
        printf("Scegli un'opzione: ");
        scanf(" %c", &scelta);
        
        if(scelta == 'A' || scelta == 'a') {
            int punteggioPartita = 0;
            printf("\nInserisci il tuo nome: ");
            scanf("%s", nome);
            
            // Domanda 1
            printf("\nDomanda 1: Qual è la capitale dell'Italia?\n");
            printf("1) Roma\n");
            printf("2) Milano\n");  
            printf("3) Napoli\n");
            printf("Risposta: ");
            scanf("%d", &risposta);
            if(risposta == 1) punteggioPartita++;
            

            //Domanda 2
            printf("\nDomanda 2: Qual è il linguaggio di questo programma?\n");
            printf("1) Python\n");
            printf("2) Java\n");
            printf("3) C\n");
            printf("Risposta: ");
            scanf("%d", &risposta);
            if(risposta == 3) punteggioPartita++;

            //Domanda 3
            printf("\nDomanda 3: Dove sorge il sole?\n");
            printf("1) Ad ovest\n");
            printf("2) A est\n");
            printf("3) A nord\n");
            printf("Risposta: ");
            scanf("%d", &risposta);
            if(risposta == 2) punteggioPartita++;

            //Risultato
            printf("\nBravo %s! Hai totalizzato %d punti.\n\n", nome, punteggioPartita);
            printf("\nPunti in questa partita: %d\n", punteggioPartita);
            punteggioTotale += punteggioPartita;
            printf("\nIl tuo punteggio totale è: %d\n\n", punteggioTotale);
        }
    
    }while (scelta != 'B' && scelta != 'b');

    printf("Grazie per aver giocato! Arrivederci!\n");
    printf("Punteggio totale: %d\n", punteggioTotale);
    return 0;
}   

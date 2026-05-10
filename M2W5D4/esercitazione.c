/*
 * esercitazione.c
 * Created on: 08/05/2026 
 */
//Carichiamo le librerie per il compilatore

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*INGRESSO
 int significa che il programma restituisce un valore intero come risultato
 void significa che il programma non accetta comandi esterni all'avvio del programma
 main è la funzione principale del programma, da cui parte l'esecuzione del codice 
*/ 
int main(void) 

//Inseriamo le variabili

{
    float d;
    float areaQuadrato, areaCerchio, areaTriangolo;
    float raggio;

    //Input dell'utente

    /*printf:scrive nel monitor(output)
     \n: comando per andare a capo*/

    printf("Calcolo delle aree di figure geometriche\n");
    printf("inserisci il valore del lato/diametro D:");

    /*scanf: legge un valore da tastiera(input)
     %f: specifica che il valore è un numero decimale, quindi rappresentano un float
     &d: indirizzo di memoria della variabile d, dice a scanf dove scrivere il numero nella memoria RAM
     */

    scanf("%f", &d);

    /*Elaborazione*/

    areaQuadrato = d * d;

    /*Cerchio 
    Calcoliamo il raggio del cerchio a partire dal diametro
    */

    raggio = d / 2;

    /*Calcoliamo l'area del cerchio usando la formula A = π * r^2
    3.14159: valore approssimato di π
    pow(r, 2): funzione che calcola r elevato alla potenza di 2, cioè r^2
    */

    areaCerchio = 3.14159 * pow(raggio, 2);

    /*Triangolo
    Calcoliamo l'area del triangolo usando la formula areaTriangolo = (pow(d, 2) * sqrt(3)) / 4
    sqrt: funzione che calcola la radice quadrata, in questo caso sqrt(3) calcola la radice quadrata di 3
    */

    areaTriangolo = (pow(d, 2) * sqrt(3)) / 4;

    /*Output dei risultati
    %.2f: specifica che il numero deve essere stampato con 2 cifre decimali
    */

    printf("\n") ;
    printf("Le aree calcolate sono:\n");
    printf("Areadelquadratodilato_%.2f_=_%.2f\n", d, areaQuadrato);
    printf("Areadelcerchiodidiametro_%.2f_=_%.2f\n", d, areaCerchio);
    printf("Areadeltriangoloequilatero_di_lato_%.2f_=_%.2f\n", d, areaTriangolo);

    /*CHIUSURA 
      exit(0) comunica al Sistema Operativo che è terminato con successo(codice 0)
      funzione contenuta in <stdlib.h>
    */
    
    exit(0);

}
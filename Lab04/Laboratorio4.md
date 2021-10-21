# Laboratorio 4: Array come parametri di funzione, scrematura array.

In questo laboratorio andremo a verificare la presenza di "side effects" e a implementare la pulizia di un vettore, eliminando gli elementi indesiderati.

## Esercizio 1
Scrivere un programma che:

1. Dichiari un vettore di 10 __float__ 
2. Legga in ingresso un numero "razionale in singola precisione".
3. Deleghi ad una funzione la scrittura, nell'array dichiarato nel main, di tutte le potenze da 0 a 9 del valore inserito dall'utente.

__Nota__: la libreria __cmath__ contiene la funzione __pow(float, float)__ che eleva il primo argomento alla potenza determinata dal secondo argomento. Ad esempio __pow(2.f, 3)__ restituisce il valore (__float__) 8.

## Esercizio 2
Implementare entrambe le funzioni di eliminazione di un elemento di un array, diciamo di __float__ viste a lezione.
 
## Esercizio 3
Scrivere un programma che, avvalendosi di un array di __float__ di dimensione 20: 

1. Chieda all'utente quanti valori  vuole inserire.
2. Controllato che il valore _n_ inserito dall'utente sia valido.
3. Legga i valori inseriti dall'utente.
4. Conti e stampi a video il numero di valori negativi eventualmente presenti nel vettore. 
5.  Elimini dal vettore tutti gli elementi negativi presenti, preservando l'ordine dei dati inseriti. A tal fine, usare una delle funzioni definite al punto precedente.


__Nota__: specifichiamo l'ovvio...ma per sicurezza ;-)
Ogni funzione andrà testata usando un programma che, da qualche parte, la richiami.

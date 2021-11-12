# Laboratorio 7: struct, typedef, puntatori.



## Esercizio 1

Definire una t-upla __myArrayDouble__ con campi __int size__, __int used__, __double * raw__.

Scrivere quindi un programma che conti e carichi i dati dal file "tempi.dat", che contiene un numero non precisato di numeri razionali. Prestate attenzione: in questo esercizio i campi __size__ e __used__, alla fine del caricamento, dovranno avere lo stesso valore.
 
## Esercizio 2

Eliminare dal vettore dei dati caricati tutti i tempi negativi. Stampare a video i campi aggiornati della t-upla di tipo __myArrayDouble__ usata per rappresentare tutte le informazioni sull'array contenente i dati.

Se ve la sentite, riversate solo i dati "puliti" in un nuovo vettore dinamicamente allocato (di dimensione pari al numero di razionali positivi), cancellate il vecchio e aggiornate il campo __raw__ della t-upla. 

## Esercizio 3

Scrivere una funzione che, preso in ingresso un nome di file, e l'indirizzo di un intero, restituisca l'indirizzo dell'array contenente tutti i dati caricati, e aggiorni il contenuto della variabile intera il cui indirizzo era stato passato alla funzione ("riferita dal puntatore").

La _signature_ della funzione dovrà essere pertanto

__double * caricaFile(const char nome[], int * rif)__ 

__OSSERVAZIONE__: il nome del file può essere definito nella funzione chiamante, per esempio

__char nomefile[] = "dati.dat";__

La funzione verrà quindi chiamata come

 __caricaFile(nomefile,&dim);__ 

 dove __dim__ è una variabile di tipo intero.
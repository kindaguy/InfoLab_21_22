# Laboratorio 5: lettura e scrittura da/su files.

Proviamo un nuovo strumento: i files. I dati contenuti nei files sopravvivono alla chiusura del programma (e anche allo spegnimento del computer) quindi sono un ottimo mezzo per archiviare e passare informazione. 

## Esercizio 1

Il file __misure.dat__ contiene un numero non precisato, ma inferiore a 100, di valori razionali in singola precisione (__float__).

1.  Dichiarare nel main un vettore di 100 __float__, diciamo __v[100]__

2. Caricare nel vettore tutti i dati presenti sul file.

3. Stampare a video il numero di elementi caricati, ovvero in numero di dati presenti sul file.

4. Stampare a video i primi e gli ultimi 3 dati caricati nel vettore.

## Esercizio 2

Estendere l'__Esercizio 1__ calcolando:

1. La media degli elementi del vettore.

2. La deviazione standard degli elementi del vettore.

3. Eliminare gli i dati "outliers" del vettore, ovvero i dati che distino dalla media più di 3 volte la deviazione standard.

Ciascun punto deve essere implementato attraverso una (o più) funzioni, "riciclando" il materiale prodotto nell'ultimo laboratorio.

## Esercizio 3

Completati gli esercizi 1 e 2, registrare le seguenti grandezze sul file __risultati.dat__, corredati da apposite didascalie che "spieghino" il dato.

1. Media, deviazione standard.
2. Massimo e minimo del vettore.
3. Numero di outliers determinati, e numero di dati rimasti.
4. Il vettore a seguito della scrematura (pulizia dagli outliers).

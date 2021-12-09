# Laboratorio 10: Ordinamento e dintorni

Applicheremo algoritmi di ordinamento a vettori di t-uple. Questo ci consentirà di toccare con mano l'ordinamento per chiave, e verificare che una volta implementato un algoritmo di ordinamento per un tipo di dato, lo stesso può essere adattato ad altri tipi di dato con modifiche minime.

Ci eserciteremo anche sul caricamento di strutture da file.

## Esercizio 1
Il file __sfere.dat__ contiene la descrizione di insieme di sfere. Per ciascuna sfera, il file riporta il diametro reale (in mm) e il colore, indicato da un carattere (’b’ per blu, ’g’ per giallo, ’r’ per rosso). Il file contiene quindi un numero __non precisato__ di coppie (diametro, colore).

Il file __sfera.h__ contiene invece la definizione della struttura (t-upla) __sfera__.

Caricare le informazioni sulle sfere contenute in __dati.dat__ in un vettore di __sfera__ allocato dinamicamente. Stampare a video la descrizione delle prime 3 e delle ultime 3 sfere caricate. Attenzione: alcuni campi delle t-uple rimangono non inizializzati. Poco male, le useremo più avanti.

Attenzione: il file __sfera.h__ può essere incluso in tutti i file che usano la struttura sfera. Notate lo strano codice che "incapsula" la definizione della struttura....

## Esercizio 2
Ordinare il vettore delle sfere in ordine di diametro effettivo non decrescente. Stampare a video la descrizione delle prime e delle ultime 3 sfere nel vettore ordinato.

Usare uno degli algoritmi di ordinamento che avete a disposizione (selection sort implementato da voi, selection sort/mergesort implementato da me e disponibile nella cartella). Meditate: In quale punto vanno cambiati i codici? Ricordate: vale l'assegnamento tra due t-uple dello stesso tipo.

## Esecizio 3

Il file __tolleranze.dat__ contiene delle terne che indicano il colore (con lo stesso carattere ’b’, ’g’ o ’r’ usato nel file sfere.dat), il diametro nominale e la tolleranza (limite superiore del valore assoluto dello scarto tra il diametro reale di una sfera e il suo diametro nominale). Completare i campi delle sfere caricate usando i dati contenuti nel file __tolleranze.dat__. Per intenderci: nel campo __exact__ inserire il valore del diametro nominale delle sfere di colore corrispondente, nel campo __atoll__ la tolleranza e nel campo __discr__ il la differenza (con segno) tra il diametro reale (__diam__) e il diametro nominale (__exact__).

Questo esercizio richiede di ragionare un attimo.

## Esercizio 4

Eliminare dal vettore delle sfere tutte le sfere aventi diametro reale distante (in valore assoluto __fabs()__) dal diametro nominale più della tolleranza. Si tratta di "riciclare"  il codice per la scrematura già discusso qualche lab fa. Stampare a video:
1. Il numero delle sfere eliminate.
2. La descrizione delle sfere elimuinate.

## Note

1. Nell'economia degli esercizi proposti, potrebbe essere conveniente scrivere una funzione per la stampa (ben formattata) delle sfere.

2. Si tratta ovviamente di un macro-esercizio, che si concretizzerà in un solo __main__ che farà diverse cose. Incapsulare ciascun esercizio in una funzione/procedura, che eventualmente ne richiami altri.

3. Attenzione, sempre, ad inizializzare i contatori.

4. Cercate di mettere le funzioni/procedure in un file separato in modo tale da esercitarvi con la compilazione separata. Provate ad usare il __make__ e il __makefile__.
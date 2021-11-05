# Laboratorio 6: allocazione dinamica.

L'allocazione dinamica di array (o, in generale, di memoria) consente di creare contenitori di informazione DURANTE l'esecuzione del codice.
Sfrutteremo l'allocazione dinamica per caricare dati da un file, contenente un numero non precisato di numeri.

## Esercizio 1

Scrivere un programma che:
1. Chieda all'utente quanti dati vuole inserire (_n > 0_)
2. Allochi un array di lunghezza _n_
3. Carichi  i dati nell'array e ne stampi il contentuto
4. Elimini l'array dalla memoria prima di terminare.

## Esercizio 2

Modificare l'Esercizio 3 del Laboratorio 4 in modo tale che i dati vengano caricati in un vettore dinamicamente allocato di dimensione pari alla numerosità dei dati. Il file contenente i dati è __misure.dat__. Attenzione: ho modificato i dati inserendo degli outliers ;-)

## Esercizio 3

Modificare l'esercizio al punto precedente come indicato di seguito. Notate che, una volta effettuata la pulizia del vettore, il numero degli outliers (diciamo _nout_) è noto, così come la numerosità (_ngood_) dei dati buoni .

Quindi:
1. Ripulito il vettore, allocare dinamicamente un secondo vettore di dimensione _ngood_ .
2. Ricopiare i dati "buoni" dal primo al secondo vettore.
3. Eliminare il vecchio vettore (che a questo punto non serve più). 
4. Stampare il contenuto del nuovo vettore in un file __scremato.dat__ con il seguente formato: un intero che indichi la numerosita` dei dati seguito dai dati, uno per riga.

## Esercizio 4

Caricare i dati contenuti del file __scremato.dat__ generato nell'esercizio precedente in un vettore di __float__ allocato dinamicamente di dimensione opportuna. Stampate a video il numero di elementi caricati e i primi 3  e gli ultimi 3 elementi del vettore caricato. Stampare inoltre i valori massimo e minimo dell'array. Tenete presente che, questa volta, il file dei dati "ci dice"  quanti sono i dati, quindi non è necessaria la "doppia lettura"  del file. 
# Laboratorio 11: Struttura dati astratta Contenitore e Simulazione esperimento



## Esercizio 1
Implementare la struttura dati astratta __myArray<T>__ per il tipo __misura__ definito nel file _myArrayMisura.h_. Nella cartella troverete alcune funzionalità già implementate. Completate l'interfaccia (discussa a lezione).

## Esercizio 2

Create un programma che generi un file di dati, che riporta i risultati delle misure, affette da errore, di un moto rettilineo uniforme, con il formato discusso a lezione (vedi slides lezione).

Il file dovrà avere una riga di intestazione, e 100 coppie __(t,x)__, includendo la condizione iniziale __(0,x0)__ . 

La trasformazione di Box-Muller, usata per generare numeri casuali estratti da una popolazione normale, è già implementata nella liberia __libRandomTama__ che troverete nella cartella.

## Esecizio 3

Determinate i coefficienti di regressione per i dati contenuti nel file __dati.dat__ che avrete generato al punto precedente. A tal fine, usare l'implementazione del contenitore __myArrayMisure__ implementato nell'Esercizio 1.

__OSSERVAZIONE__: per tutti gli esercizi proposti ho già predisposto la soluzione nella cartella. Se volete imparare qualcosa, evitate di scopiazzare tutto senza criterio! In caso di attacchi di panico, invece, avete un riferimento.
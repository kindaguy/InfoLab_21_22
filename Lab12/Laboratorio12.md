# Laboratorio 12: Simulazione prova di laboratorio
Proviamo a svolgere (parzialmente) un tema d'esame di laboratorio, cominciando dalla parte di copia del materiale necessario.


## Esercizio 1
La cartella __/home/comune/TamaLab12_Dati__ sulla macchina __tolab.fisica.unimi.it__ contiene il testo della prova d'esame e i files di dati su cui lavorare. Copiare la cartella sulla propria macchina usando il comando 

__scp -r username@tolab.fisica.unimi.it:/home/comune/TamaLab12_Dati ./__

_Attenzione_: username è il vostro nome utente, non ci sono spazi in "-r", "./" è la cartella di destinazione, quindi, in questo caso, la cartella da cui viene lanciato il comando da shell.


## Esercizio 2

Create una cartella dal nome __Cognome_matricola__ dove __Cognome__ è il vostro cognome e __matricola__ è la vostra matricola. Copiate dentro la cartella almeno  il testo del tema d'esame e i file di dati. Provate quindi a copiare la cartella nella cartella di destinazione  __/home/comune/TamaLab12_Risultati__ posizionandovi nella cartella che contiene la cartella __Cognome_matricola__ da copiare e lanciando il comando

__scp -r Cognome_matricola username@tolab.fisica.unimi.it:/home/comune/TamaLab12_Risultati__

Se non ricevete messaggi strani dalla shell dovrebbe essere andato tutto a buon fine.

Controllate il buon esito dell'operazione collegandovi, via shell, alla macchina __tolab.fisica.unimi.it__ tramite il comando 

__ssh username@tolab.fisica.unimi.it__

e immettendo la vostra password quando richiesta e spostandovi, via comandi __cd__ nella cartella __/home/comune/TamaLab12_Risultati__ ecc...
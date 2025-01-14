# PODRACE-PATHFINDING-CHALLENGE
Per mostrare il vostro valore come Jedi, sareste sottoposti a una prova. Come Anakin Skywalker, dovrete partecipare a una gara di sgusci. Grazie all’aiuto di una vecchia conoscenza, il pilota di X-Wing Cristian Solo, vi viene fornita una mappa dell’area in cui si svolgerà la gara.
In questa specialità valgono le seguenti regole:
  1. La gara si svolge su una mappa prestabilita, suddivisa in quadrati, alcuni dei quali possono contenere degli anelli.
  2. Ogni anello può essere di colore bianco oppure nero.
  3. L’obiettivo è quello di creare un percorso sulla mappa che connetta più anelli possibili tra loro, formando un percorso continuo, non auto-intersecante e preferibilmente chiuso.
  4. Se durante il percorso si raggiunge un anello bianco, questo deve essere attraversato in maniera rettilinea, curvando nel quadrato immediatamente precedente e/o successivo.
  5. Se durante il percorso si raggiunge un anello nero, al contrario, attraversandolo si deve curvare di novanta gradi, procedendo in modo rettilineo nei quadrati precedente e successivo.

## Obiettivo
Il vostro compito è vincere la gara:
  - Per fare ciò dovrete descrivere un percorso che rispetti le regole stabilite e attraversi il maggior numero di anelli possibile. Il vostro punteggiò sarà in corrispondenza con la percentuale di anelli attraversati.
  - Il percorso deve passare in ogni quadrato al massimo una volta e deve essere continuo.
  - Il percorso può essere sia chiuso (se alla fine della gara si torna al punto di partenza), sia aperto (se la gara si interrompe in un punto diverso da quello di partenza).

I percorsi aperti sono concessi, ma con una penalità: il punteggio sarà dimezzato.

### Note:
  - Vi è concesso che i percorsi aperti possano iniziare o terminare in un anello. Quindi in tal caso, per questi anelli, è concesso non completare la richiesta delle regole.
  - Vi garantiamo che esiste sempre una soluzione ottima per ogni mappa, ovvero un percorso chiuso valido che attraversa tutti gli anelli.

## Istruzioni di compilazione
Di seguito riportiamo le istruzioni per testare i vostri progammi su vari sistemi. Si suppone che il sorgente con il vostro codice si chiami file swrace.cpp.
- I file swrace.cpp, grader.cpp e swrace.h devo stare nella stessa cartella.

Sistemi GNU/Linux 
> /usr/bin/g++ -DEVAL -std=c++11 -O2 -pipe -static -s -o swrace swrace.cpp grader.cpp

---
Per maggiori informazioni sul progetto, vedere file: [*Star Wars - Il Risveglio dell’Algoritmo.pdf*](https://github.com/ChabbakiAymane/SWRACE/blob/main/Star%20Wars%20-%20Il%20Risveglio%20dell’Algoritmo.pdf).

//Alessandra

#ifndef GOP_GIOCO_H
#define GOP_GIOCO_H

class Tabellone;
#include //giocatore
#include //tabellone
#include //mazzocarte

//classe Gioco
class Gioco{
    Utente *utenti[10];
    Tabellone *tabellone[100];
    Mazzo *mazzo;
    //bool isFinish = false;
    
    //inizializzo variabili per l'inizio del gioco
    int nUtenti = 0;
    int utenteattivo = 0; //utente che sta giocando
    int nTabellone = 0; //

    
    
    //
    //
    void outputInit();

    void initPlayers();
    void initSquares();
    void checkSquares();

    void gameLoop();
    void throwDice();
    void executeSquare();

    int nextPlayer();
    int prevPlayer();

    void showEnd();

public:
    Game();

    void movePlayer(int movement);
    void drawCard();
    void executeCard(Card* card);
    void missTurn(int turns);
    void backStart();
    void throwAgain();
    void switchPosition();
    void finish();
    void showSquares();
};
 //
 //

#endif //GOP_GIOCO_H

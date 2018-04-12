//Alessandra

#include <iostream>
#include <cstdlib>
#include "domande.h"
// #include "utils.h"

#define N_RISPOSTE 4;

using namespace std;

//domande con una sola risposta esatta
struct Domanda {
    char testo[100];
    char risposte[N_RISPOSTE][50];
    int giusta;
};

//elenco delle domande
Domanda domande[] = {
        {"Quale squadra di calcio italiana ha vinto lo scudetto nell'anno 2016/2017?", {
            "Juventus",
            "Milan",
            "Roma",
            "Lazio"
            }, 1 },
        {"Dove sono nati i giochi olimpici?", {
            "Stati Uniti",
            "Grecia",
            "Italia",
            "Russia"
            }, 2},
        {"Nel calcio, un goal segnato direttamente dal portiere direttamente da calcio di rinvio è valido?", {
            "Sì, sempre",
            "Mai",
            "A volte",
            "Sì, solo se il pallone rimbalza"
            }, 1},
        {"Che dimensioni hanno i campi da basket?", {
            "18x9",
            "15x28",
            "23,77x10,97",
            "24x11"
            }, 2},
        {"Di che colore è la maglia del vincitore del Tour de France?", {
            "Bianca",
            "Verde",
            "Rosa",
            "Gialla"
            }, 4},
        {"In quale scuderia non ha corso Ayrton Senna?", {
            "Ferrari",
            "McLaren",
            "Williams",
            "RedBull"
            },1},
        {"Al giocatore di quale sport viene assegnato il Pallone d'Oro?",{
            "Basket",
            "Calcio",
            "Pallavolo",
            "Pallanuoto"
            },2},
        {"Dove si è svolta la 19° edizione delle Olimpiadi (1968)?",{
            "Giappone",
            "Canada",
            "Spagna",
            "Messico"
            },4},
        {"In che anno la Federazione Italiana ha vinto l'ultimo mondiale?",{
			"1998",
			"2006",
			"2014",
			"2002"
		},2},
		{"Nelle scuole di tennis, qual è il primo colpo che i maestri insegnano?",{
			"Il rovescio",
			"Il diritto",
			"La battuta",
			"Il colpo a volo"
		},2},
		{"Quale nazionale di calcio ha vinto più mondiali?",{
			"Italia",
			"Argentina",
			"Brasile",
			"Germania"
		},3}
};

int nDomande=sizeof(domande)/sizeof(*domande);

Domanda pickQuestion(){ //cambiare nome funzione
    return domande[rand()%nDomande];
}
		


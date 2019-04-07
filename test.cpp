#include "card.h"
#include "deck.h"
#include "iostream"


using namespace std;
using namespace cardtypes;



int main()
{
    Card h;
    
    Deck blah;
    blah.Shuffle();
    h = blah.DealNextCard();
    h.PrintCard();
}


#include "deck.hpp"

using namespace std;
using namespace cardtypes;


Card DealNextCard();
void Shuffle();

void DisplayDeck()
{
    Card * cards = ReturnCards();
    for(int i = 0; i <= NUM_TOTAL_CARDS; i++)
    {
        cards[i].PrintCard();
    }
}

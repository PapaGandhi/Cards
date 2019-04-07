#include "card.h"
#include "deck.h"

#include <iostream>
#include <cstdlib>

using namespace std;
using namespace cardtypes;

Card Deck::GetTopCard()
{
    return cards[topCard];
}

Card Deck::DealNextCard()
{
    if (topCard > 51)
    {
        cerr << "Error, end of Deck";
        return cards[0]; // this doesn't seem right, ask someone
    }
    else
    {
        int tmp = topCard;
        topCard++;
        return cards[tmp];
    }
}

void Deck::Shuffle()
{
    for (int i = 0; i < 52; i++)
    {
        int r = rand() % 52; // generate a random position
        Card temp = cards[i];
        cards[i] = cards[r];
        cards[r] = temp;
    }
}

void Deck::DisplayDeck()
{
    for (int i = 0; i < NUM_TOTAL_CARDS; i++)
    {

        cards[i].PrintCard();
    }
}

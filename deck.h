#ifndef DECK_H
#define DECK_H

#include "card.h"

#include <iostream>
using namespace std;

const int NUM_TOTAL_CARDS = 52;
const int NUM_SUITS = 4;
const int NUM_RANKS = 13;

class Deck
{
  
  public:
    Deck()
    {
        int cardCount = 0;
        for (int i = 1; i <= NUM_RANKS; i++)
        {
            for (int j = 1; j <= NUM_SUITS; j++)
            {
                cards[cardCount].SetCard(cardtypes::Rank(i), cardtypes::Suit(j));
                cardCount++;
            }
        }
        topCard = 0;
    }

    Card DealNextCard();
    void Shuffle();
    void DisplayDeck();
    Card GetTopCard();


    private:
        Card cards[52];
        int topCard;
};


#endif
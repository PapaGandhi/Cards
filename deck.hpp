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
  private:
  public:
    Deck()
    {
        cards = new Card[NUM_TOTAL_CARDS]();
        int cardCount = 0;
        for (int i = 1; i <= NUM_SUITS; i++)
        {
            for (int j = 1; j <= NUM_RANKS; j++)
            {
                cout << i << " " << j << "\n";
                cards[cardCount].SetCard(cardtypes::Rank(i), cardtypes::Suit(j));
                cardCount++;
            }
        }
    }

    Card* ReturnCards(){ return cards;};
    Card DealNextCard();
    void Shuffle();
    void DisplayDeck();
    Card *cards;

  protected:
};

#endif // DECK_H
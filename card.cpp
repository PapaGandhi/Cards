#include "card.h"
#include <iostream>

using namespace std;
using namespace cardtypes;

void Card()
{
    //nothing
}

cardtypes::Rank Card::GetRank()
{
    return cardRank;
}
cardtypes::Suit Card::GetSuit()
{
    return cardSuit;
}

void Card::SetSuit(Suit suit)
{
    cardSuit = suit;
}

void Card::SetRank(Rank rank)
{
    cardRank = rank;
}

void Card::SetCard(Rank rank, Suit suit)
{
    cardRank = rank;
    cardSuit = suit;
}

void Card::PrintCard()
{

    cout << "Card: ";

    switch (cardRank)
    {
    case A:
        cout << "Ace";
        break;
    case TWO:
        cout << "Two";
        break;
    case THREE:
        cout << "Three";
        break;
    case FOUR:
        cout << "Four";
        break;
    case FIVE:
        cout << "Seven";
        break;
    case SIX:
        cout << "Six";
        break;
    case SEVEN:
        cout << "Seven";
        break;
    case EIGHT:
        cout << "Eight";
        break;
    case NINE:
        cout << "Nine";
        break;
    case TEN:
        cout << "Ten";
        break;
    case J:
        cout << "Jack";
        break;
    case Q:
        cout << "Queen";
        break;
    case K:
        cout << "King";
        break;
    default:
        cerr << "Error in Card Suit";
    }

    cout << " of ";

    switch (cardSuit)
    {
    case D:
        cout << "Diamonds";
        break;
    case H:
        cout << "Hearts";
        break;
    case C:
        cout << "Clubs";
        break;
    case S:
        cout << "Spades";
        break;
    default:
        cout << "Error in Card Rank";
    }

    cout << "\n";
}

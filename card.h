#ifndef CARD_H
#define CARD_H

#include <string>

namespace cardtypes
{
enum Rank
{
    A = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    J,
    Q,
    K
};
enum Suit
{
    D = 1,
    H,
    C,
    S
};
} // namespace cardtypes

class Card
{

  public:
    Card()
    {
    }
    Card(cardtypes::Rank rank, cardtypes::Suit suit)
    {
        cardRank = rank;
        cardSuit = suit;
    }

    cardtypes::Rank GetRank();
    cardtypes::Suit GetSuit();
    std::string CardName();
    void SetSuit(cardtypes::Suit);
    void SetRank(cardtypes::Rank);
    void SetCard(cardtypes::Rank, cardtypes::Suit);
    void PrintCard();

  private:
    cardtypes::Rank cardRank;
    cardtypes::Suit cardSuit;

  protected:
};

#endif

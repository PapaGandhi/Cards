#ifndef HAND_H
#define HAND_H

#include "card.h"

class Hand {
    public: 
        Hand();
        void setCards();
        Card getCards();
        //what should the hand be? An array of Cards?
    private:
        Card cards[2];
        // are the need for any private variables?

};

#endif
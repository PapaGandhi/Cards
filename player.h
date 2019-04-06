#ifndef PLAYER_H
#define PLAYER_H

#include "hand.h"

class Player 
{
    public:
        Player()
        {
            hand;
        }

    private:
        Hand hand;
};

#endif
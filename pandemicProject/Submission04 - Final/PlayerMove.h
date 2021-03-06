//
//  PlayerMove.h
//  pandemic
//
//  Created by Jefffrey McIntire on 10/17/13.
//  Copyright (c) 2013 Jefffrey McIntire. All rights reserved.
//
#ifndef PLAYERMOVE_H
#define PLAYERMOVE_H
#include "Card.h"
#include "City.h"
#include "Player.h"

class PlayerMove {
  public:
    PlayerMove();

    Player * getCurrentPlayer() { return currentPlayer; }
    void setCurrentPlayer(Player * _currentPlayer)
        { currentPlayer=_currentPlayer; }
    void playOwnCard(Card*);
    void playOthCard(Card*);
    void moveToCity(City*);
    void moveAdjacent(City*);
    void charterFlight(City*);
    bool canCharterFlight(City*);
    void directFlight(City*);
    bool canDirectFlight(City*);
    void shuttleFlight(City*);
    bool canShuttleFlight(City*);
    void buildRStation();
    void treatDisease(int,int);
    bool cureDisease(string);
    void shareKnowledge(Player*, Player*, Card*);
  private:
    Player * currentPlayer;
};

#endif /* defined(__pandemic__PlayerMove__) */

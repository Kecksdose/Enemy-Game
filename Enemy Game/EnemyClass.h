//
//  EnemyClass.h
//  Enemy Game
//
//  Created by Timon Schmelzer on 04.04.15.
//  Copyright (c) 2015 Timon Schmelzer. All rights reserved.
//

#ifndef __Enemy_Game__EnemyClass__
#define __Enemy_Game__EnemyClass__

#include <stdio.h>
#include "Elements.h"
#include <string>

class Enemy{
public:
  Enemy(); // default constructor
  Enemy(std::string name, int max_healthpoints/*, Elements element*/); // normal constructor
  Enemy(std::string string_code); // special constructor
  
  auto getDamage(int damage) -> void; // enemy gots damage
  auto doDamage() -> int; // enemy does damage
  
  auto isDead() -> void; // checks, whether the enemy is dead
  
  auto Print() -> void; // Prints all informations
  
private:
  std::string name_;
  int max_healthpoints_;
  int current_healpoints_;
  bool is_dead_;
//  Elements element_;
};

#endif /* defined(__Enemy_Game__EnemyClass__) */

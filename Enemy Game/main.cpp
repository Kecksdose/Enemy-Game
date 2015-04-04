//
//  main.cpp
//  Enemy Game
//
//  Created by Timon Schmelzer on 04.04.15.
//  Copyright (c) 2015 Timon Schmelzer. All rights reserved.
//

#include <iostream>
#include "EnemyClass.h"

int main() {

  Enemy firstEnemy("Klaus", 10);
  firstEnemy.Print();
  firstEnemy.getDamage(4);
  firstEnemy.Print();
  firstEnemy.getDamage(5);
  firstEnemy.getDamage(3);
  
  
  return 0;
}

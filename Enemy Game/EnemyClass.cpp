//
//  EnemyClass.cpp
//  Enemy Game
//
//  Created by Timon Schmelzer on 04.04.15.
//  Copyright (c) 2015 Timon Schmelzer. All rights reserved.
//

#include "EnemyClass.h"
#include "Elements.h"
#include <iostream>
#include <string>


Enemy::Enemy(){};

Enemy::Enemy(std::string name, int max_healthpoints/*, Elements element*/){
  name_ = name;
  max_healthpoints_ = max_healthpoints;
  current_healpoints_ = max_healthpoints;
//  element_ = element;
  is_dead_ = false;
};

Enemy::Enemy(std::string string_code){
  // to be implemented
};
  
auto Enemy::getDamage(int damage) -> void{
  current_healpoints_ -= damage;
  std::cout << name_ << " hat " << damage << " Schaden erhalten!" << std::endl;
  Enemy::isDead();
};

auto Enemy::doDamage() -> int{
  return 1;
};

auto Enemy::isDead() -> void{
  if (current_healpoints_ <= 0) {
    current_healpoints_ = 0;
    std::cout << name_ << " wurde besiegt!" << std::endl;
    is_dead_ = true;
  }
};

auto Enemy::Print() -> void{
  std::cout << "Name des Gegners: " << name_ << std::endl;
  std::cout << "Aktuelle und Maximale HP: " << current_healpoints_ << "/" << max_healthpoints_ << std::endl;
//  std::cout << "Elementtyp: " << element_.Print() << std::endl;
}

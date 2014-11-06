#include <iostream>
#include <SFML/Graphics.hpp>
#include "entity.hpp"
using namespace std;

int main()
{
   Entity gabe(100,10);
   Entity enemy(100, 5);
   while(gabe.is_dead == false && enemy.is_dead == false)
   {
       gabe.LOSE_HEALTH(enemy.outPut_damage());
       enemy.LOSE_HEALTH(gabe.outPut_damage());
       if(gabe.is_dead)
           cout << "Gabe is dead" << endl;
       if(enemy.is_dead)
           cout << "Enemy is dead" << endl;
   }
}


#ifndef ENTITY_HPP
#define ENTITY_HPP
#include <iostream>
using namespace std;
class Entity
{
private:
    bool DEAD(); //Check if player is dead
    void HEALTH_TO_HIGH();//Check if current health is above max_health
    
protected:
    int max_health, damage, current_health;
    
    
    /*
     * TO DO:
     * 
     * Add vector of items to represent the inventory
     * Add current item in hand
     * Add level
     * Add other skills(Or make a skill class)
     * Add function that will load a file inputed through constructer
     */
    
public:
    //HP stands for Health points
    int outPut_damage();
    Entity(const int inpHealth, const int inpdamage);
    void ADD_HEALTH(int HP_GAINED);
    void LOSE_HEALTH(int HP_LOSED);
    bool is_dead = false;
};

#endif // ENTITY_HPP

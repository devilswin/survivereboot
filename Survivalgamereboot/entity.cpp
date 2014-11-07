#include "entity.hpp"
using namespace std;
Entity::Entity(const int inpHealth, const int inpdamage)
{
    max_health = inpHealth;
    current_health = inpHealth;
    damage = inpdamage;
    
}
bool Entity::DEAD()
{
    return current_health < 0;
}
void Entity::HEALTH_TO_HIGH()
{
    if(current_health > max_health)
    {
        current_health = max_health;
    }
}
void Entity::ADD_HEALTH(int HP_GAINED)
{
    current_health = current_health + HP_GAINED;
    HEALTH_TO_HIGH();
}
void Entity::LOSE_HEALTH(int HP_LOSED)
{
    current_health = current_health - HP_LOSED;
    if(DEAD() == true)
        //TO DO: add drop items func
        
        is_dead = DEAD();
}
int Entity::outPut_damage()
{
    return damage;
}
int Entity::output_cur_HP()
{
    return current_health;
}
int Entity::output_max_HP()
{
    return max_health;
}

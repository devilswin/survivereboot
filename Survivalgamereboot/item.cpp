#include "item.hpp"

Item::Item()
{ 
}
int Item::degrade_item(const int amount_to_degrade)
{
    
    return current_condition = current_condition - amount_to_degrade;
    is_destroyed();
}
int Item::repair_item(const int amount_to_repair)
{
    current_condition += amount_to_repair;
    if(cond_too_high())
        current_condition  = max_condition;
    return current_condition;
}
bool Item::is_destroyed()
{
    return current_condition < 0;
}
float Item::get_price()
{
    return currency_val;
}
bool Item::cond_too_high()
{
    return current_condition > max_condition;
}
string Item::get_name()
{
    return name;
}

Clothes::Clothes(const int mCond, const int numVal, const string it_name, const int iWeight, const float rare)
{
    max_condition = mCond;
    numerical_val = numVal;
    current_condition = mCond;
    name = it_name;
    weight = iWeight;
    currency_val = ((numerical_val * 5) / (weight/10))*rare;
}
Guns::Guns(const int mCond, const int numVal, const string it_name, const int iWeight, const float rare)
{
    max_condition = mCond;
    numerical_val = numVal;
    current_condition = mCond;
    name = it_name;
    weight = iWeight;
  
    currency_val = ((numerical_val * 5) / (weight/10))*rare;
}
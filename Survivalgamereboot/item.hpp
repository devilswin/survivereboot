#ifndef ITEM_HPP
#define ITEM_HPP
#include <cstring>
#include <iostream>
using namespace std;
class Item
{
private:
    bool is_destroyed();
    bool cond_too_high();
protected:
   int max_condition, current_condition,weight, numerical_val;
   string name;
   float currency_val, rarity;
public:
    int repair_item(const int amount_to_repair);
    int degrade_item(const int amount_to_degrade);
    float get_price();
    string get_name();
    Item();
};
class Clothes : public Item
{
public:
    Clothes(const int mCond, const int numVal, const string it_name, const int iWeight, const float rare);
};
class Guns : public Item
{
public:
    Guns(const int mCond, const int numVal, const string it_name, const int iWeight, const float rare);
};

#endif // ITEM_HPP

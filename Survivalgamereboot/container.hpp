#ifndef CONTAINER_HPP
#define CONTAINER_HPP
#include <string>
#include <iostream>
#include <vector>
#include "item.hpp"
#include <memory>
#include <cstdio>
#include <cstdlib>
using namespace std;
class container
{
    
private:
    void full_check();
    void spawn_loot();
protected:
   vector<unique_ptr<Item>> contents;
    string name;
    int size_of_container;
    bool is_locked, is_empty;
    int amount_of_tiles;
    /* 
     * TO DO: 
     *  add vector for inventory
     * Add rarity thing 
    */
public:
    void out_conts();
    container(const int tiles_taken_up, const int size);
};

#endif // CONTAINER_HPP

#include "container.hpp"
using namespace std;
container::container(const int tiles_taken_up, const int size)
{
    size_of_container = size;
    spawn_loot();
}
void container::spawn_loot()
{
        
        unique_ptr<Item> ad;
        int x;
        for (int i = 0; i < size_of_container; i++)
        {
            x = rand() % 5;
            switch(x)
            {
            case 1:
                ad = unique_ptr<Item>(new Clothes {100,10,"Hat",10,10});
                break;
            case 2:
                ad = unique_ptr<Item>(new Clothes {100,10,"Glasses",10,10});
                break;
            case 3:
                ad = unique_ptr<Item>(new Clothes {100,10,"Pants",10,10});
                break;
            case 4:
                ad = unique_ptr<Item>(new Clothes {100,10,"Shoes",10,10});
                break;
            case 5:
                ad = unique_ptr<Item>(new Clothes {100,10,"Shirt",10,10});
                break;
            default:
                x = rand()% 5;
                i = i - 1;
                
              
            }
              contents.push_back(move(ad));
        }
    
}
void container::out_conts()
{
    for(size_t i = 0; i< contents.size(); i++)
        cout<< contents[i]->get_name() << endl;
}

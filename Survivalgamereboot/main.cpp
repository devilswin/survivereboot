#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "entity.hpp"
#include <vector>
#include "item.hpp"
#include <cstdio>
#include <cstdlib>
#include "container.hpp"
using namespace std;

int main()
{
    srand(time(NULL));
    container gabe(10, 25);
    gabe.out_conts();
    return 0;
}


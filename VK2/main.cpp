#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    Game game(20);
    game.play();

    return 0;
}

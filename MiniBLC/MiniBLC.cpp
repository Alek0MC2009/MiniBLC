#include "Game.h"
#include "Player.h"

int main()
{
    Game game;

    if (game.Construct(640, 480, 2, 2))
    {
        game.InstanceCreate<Player>(100, 100);
        game.Start();
    }

    return 0;
}
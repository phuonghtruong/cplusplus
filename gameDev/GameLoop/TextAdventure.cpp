#include "Player.h"
#include "tchar.h"
#include "GameLoop.h"

int _tmain(int argc, _TCHAR* argv[])
{
    Player player("phuong");
    GameLoop::WelcomePlayer(player);

    bool isPlaying = true;
    while (isPlaying)
    {
        isPlaying = GameLoop::RunGame();
    }

    return 0;
}

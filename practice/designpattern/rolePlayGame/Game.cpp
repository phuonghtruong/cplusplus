#include <iostream>
#include "player.h"
#include "monster.h"
#include "gameCharacter.h"

int main ()
{
    GameCharacter monsterA (CharacterType::MONSTER, 5);
    GameCharacter playerA (CharacterType::PLAYER, 1);

    std::cout << "the first character is " << monsterA.getType() << " with " << monsterA.getLevel() << std::endl;
    std::cout << "the second character is " << playerA.getType() << " with " << playerA.getLevel() << std::endl;
    
    return 0;
}
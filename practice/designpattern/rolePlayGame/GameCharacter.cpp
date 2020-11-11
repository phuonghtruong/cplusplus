#include "GameCharacter.h"
#include "Monster.h"

GameCharacter::GameCharacter(const CharacterType type, const int level)
{
    this->type = type;
    this->level = level;
}
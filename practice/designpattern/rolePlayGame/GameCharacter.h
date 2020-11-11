#pragma once

// #include <iostream>
#include "characterType.h"

class GameCharacter
{
private:
    int level;
    CharacterType type;
public:
    GameCharacter(const CharacterType type, const int level);
    virtual CharacterType create(const CharacterType type, const int level);
    int getLevel() const {return level;}
    CharacterType getType() const {return type;}
};
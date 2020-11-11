#pragma once
#include "GameCharacter.h"

class Monster : public GameCharacter
{
private:
    MonsterType type;
public:
    void create(const MonsterType type, const int level);

};
#pragma once
#include "PlayableCharacter.h"


class Thomas : public PlayableCharacter
{
public:
    Thomas();
    bool handleInput() override;
};

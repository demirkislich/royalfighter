#ifndef SPIEL_ATTACK_H
#define SPIEL_ATTACK_H
#include "player.h"
#endif //SPIEL_ATTACK_H


enum skillType {
    HEAL,
    DAMAGE
};
struct Skill {
    char name[NAME_CAP];
    float dmg;
    enum skillType type;
    int debuff_spd;
    int debuff_str;
    int debuff_defense;
};


#pragma once

#ifndef SPIEL_PLAYER_H
#define SPIEL_PLAYER_H
#ifndef NAME_CAP
#define NAME_CAP 50
#endif
#endif //SPIEL_PLAYER_H

struct Player {
    char name[NAME_CAP];
    float max_hp;
    float current_hp;
    float max_mp;
    float current_mp;
    int max_spd;
    int current_spd;
    int max_str;
    int current_str;
    int max_defense;
    int current_defense; // should add other stats
};
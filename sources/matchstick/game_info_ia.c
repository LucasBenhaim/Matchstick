/*
** EPITECH PROJECT, 2021
** game_info_ia.c
** File description:
** give real time info of the game
*/

#include "struct.h"

int game_info_ia(map_t map)
{
    int res = 0;

    for (int i = 0; map.stick[i] != -1; i++)
        res += map.stick[i];
    if (res == 0)
        return (1);
    return (0);
}

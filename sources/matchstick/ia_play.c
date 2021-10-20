/*
** EPITECH PROJECT, 2021
** ia_play.c
** File description:
** ia turn to play
*/

#include "printf.h"
#include "struct.h"

map_t ia_play(map_t map)
{
    my_printf("\nAI's turn...\n");
    for (int i = 0; map.stick[i] != -1; i++) {
        if (map.stick[i] > 0) {
            map.stick[i] -= 1;
            map.space_a[i] += 1;
            my_printf("AI removed 1 match(es) from line %d\n", i + 1);
            return (map);
        }
    }
    return (map);
}
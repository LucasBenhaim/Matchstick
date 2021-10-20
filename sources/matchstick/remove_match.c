/*
** EPITECH PROJECT, 2021
** remove_match.c
** File description:
** remove the match with the input of the player
*/

#include "struct.h"

map_t remove_match(map_t map, input_t input)
{
    map.stick[input.line - 1] -= input.match;
    map.space_a[input.line - 1] += input.match;
    return (map);
}
/*
** EPITECH PROJECT, 2021
** check_match.c
** File description:
** check the input of matches
*/

#include "printf.h"
#include "struct.h"

int check_match(map_t map, input_t input, int max_given)
{
    if (input.match > max_given) {
        my_printf("Error: you cannot remove more than %d matches per turn\n"
        , max_given);
        return (1);
    }
    if (map.stick[input.line - 1] < input.match) {
        my_printf("Error: not enough matches on this line\n");
        return (1);
    }
    if (input.match == 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (1);
    }
    return (0);
}
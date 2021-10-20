/*
** EPITECH PROJECT, 2021
** create_map.c
** File description:
** create the map with the matches
*/

#include <stdlib.h>
#include "my_function.h"
#include "struct.h"

map_t create_space(map_t match, int n)
{
    match.space_a = malloc(sizeof(int) * n + 1);
    match.space_b = malloc(sizeof(int) * n + 1);
    int big = match.stick[n - 1];
    int space = (big - 1) / 2;

    for (int i = 0; i < n; i++) {
            match.space_a[i] = space;
            match.space_b[i] = space;
        --space;
    }
    match.space_a[n] = -1;
    match.space_b[n] = -1;
    return (match);
}

map_t create_map(char *lign)
{
    int i = 0;
    int n = my_getnbr(lign);
    map_t match;
    match.stick = malloc(sizeof(int) * n + 1);

    for (; i < n; i++) {
        if (i == 0)
            match.stick[i] = 1;
        else
            match.stick[i] = match.stick[i - 1] + 2;
    }
    match.stick[i] = -1;
    match = create_space(match, n);
    return (match);
}

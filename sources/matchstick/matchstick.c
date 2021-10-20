/*
** EPITECH PROJECT, 2021
** matchstick.c
** File description:
** program to execute all the fonction of the project
*/

#include <stddef.h>
#include "my_function.h"
#include "matchstick.h"
#include "struct.h"
#include "printf.h"

#include <stdio.h>


match_t init_basic(char *lign, char *nb)
{
    match_t basic = {0};

    basic.info = 0;
    basic.row = my_getnbr(lign);
    basic.max_given = my_getnbr(nb);
    return (basic);
}

void print_last_word(int info)
{
    if (info == 1)
        my_printf("I lost... snif... but I'll get you next time!!\n");
    else
        my_printf("You lost, too bad...\n");
}

int matchstick(char *lign, char *nb)
{
    match_t basic = init_basic(lign, nb);
    map_t match;
    input_t input = {0};

    match = create_map(lign);
    display_match(match, basic.row);
    while (basic.info == 0) {
        input = entrance_msg(match, basic);
        if (input.conf == -1)
            return (0);
        match = remove_match(match, input);
        display_match(match, basic.row);
        basic.info = game_info_player(match);
        if (basic.info == 0) {
            match = ia_play(match);
            display_match(match, basic.row);
            basic.info = game_info_ia(match);
        }
    }
    print_last_word(basic.info);
    return (basic.info);
}
/*
** EPITECH PROJECT, 2021
** matchstick.h
** File description:
** header for the project matchstick
*/

#ifndef MATCHSTICK_H
#define MATCHSTICK_H

#include "struct.h"

map_t create_map(char *lign);

int matchstick(char *lign, char *nb);

void display_match(map_t match, int n);

input_t entrance_msg(map_t map, match_t basic);

map_t remove_match(map_t map, input_t input);

map_t ia_play(map_t map);

int game_info_player(map_t map);

int game_info_ia(map_t map);

entrance_t init_entrance(void);

int check_match(map_t map, input_t input, int max_given);

int check_input(char *enter, input_t *input);

int check_line(int line, int row);


#endif
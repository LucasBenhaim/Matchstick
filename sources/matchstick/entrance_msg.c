/*
** EPITECH PROJECT, 2021
** entrance_msg.c
** File description:
** take a input and return it trough a string
*/

#include <stddef.h>
#include <stdio.h>
#include "printf.h"
#include "my_function.h"
#include "struct.h"
#include "matchstick.h"

input_t entrance_match(map_t map, int max_given, input_t input)
{
    size_t size = 0;
    ssize_t linesize = 0;
    char *entrance = NULL;
    int exit_match = 0;

        my_printf("Matches: ");
        linesize = getline(&entrance, &size, stdin);
        if (linesize == -1) {
            input.conf = -1;
            return (input);
        }
        entrance[linesize - 1] = '\0';
        if (check_input(entrance, &input) == 0) {
            input.match = my_getnbr(entrance);
            exit_match = check_match(map, input, max_given);
            if (exit_match == 1)
                input.conf = 1;
        }
    return (input);
}

input_t get_match(input_t input, map_t map, match_t basic, entrance_t *enter)
{
    enter->entrance[enter->linesize - 1] = '\0';
    if (check_input(enter->entrance, &input) == 0) {
        input.line = my_getnbr(enter->entrance);
        if (check_line(input.line, basic.row) == 0) {
            enter->info = 1;
        }
    }
    if (enter->info == 1) {
        input = entrance_match(map, basic.max_given, input);
        if (input.conf == 1)
            enter->info = 0;
    }
    return (input);
}

input_t entrance_msg(map_t map, match_t basic)
{
    entrance_t enter = init_entrance();
    input_t input = {0};

    my_printf("\nYour turn:\n");
    while (enter.info == 0) {
        input.conf = 0;
        my_printf("Line: ");
        enter.linesize = getline(&enter.entrance, &enter.size, stdin);
        if (enter.linesize == -1) {
            input.conf = -1;
            return (input);
        }
        input = get_match(input, map, basic, &enter);
    }
    if (input.conf == -1)
        return (input);
    my_printf("Player removed %d match(es) from line %d\n",
    input.match, input.line);
    return (input);
}
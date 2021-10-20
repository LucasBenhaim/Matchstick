/*
** EPITECH PROJECT, 2021
** check_input.c
** File description:
** check input
*/

#include "printf.h"
#include "struct.h"

int check_input(char *enter, input_t *input)
{
    int i = 0;

    while (enter[i]) {
        if (enter[i] >= '0' && enter[i] <= '9')
            i++;
        else {
            my_printf("Error: invalid input (positive number expected)\n");
            input->conf = 1;
            return (84);
        }
    }
    return (0);
}

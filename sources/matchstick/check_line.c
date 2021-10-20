/*
** EPITECH PROJECT, 2021
** check_line.c
** File description:
** check line
*/

#include "printf.h"

int check_line(int line, int row)
{
    if (line == 0 || line > row) {
        my_printf("Error: this line is out of range\n");
        return (1);
    }
    return (0);
}
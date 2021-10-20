/*
** EPITECH PROJECT, 2021
** init_entrance.c
** File description:
** init the struct for getline
*/

#include <stddef.h>
#include "struct.h"

entrance_t init_entrance(void)
{
    entrance_t enter;

    enter.info = 0;
    enter.size = 0;
    enter.linesize = 0;
    enter.entrance = NULL;
    return (enter);
}
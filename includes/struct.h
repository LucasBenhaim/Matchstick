/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** header for structures
*/

#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>

typedef struct input_s {
    int line;
    int match;
    int conf;
} input_t;

typedef struct map_s {
    int *space_a;
    int *stick;
    int *space_b;
} map_t;

typedef struct entrance_s {
    int info;
    //input_t input;
    size_t size;
    ssize_t linesize;
    char *entrance;
} entrance_t;

typedef struct matchstcik_s {
    int row;
    int max_given;
    int info;
} match_t;

#endif
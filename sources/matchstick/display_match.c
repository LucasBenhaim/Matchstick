/*
** EPITECH PROJECT, 2021
** display_match.c
** File description:
** only display the matches
*/

#include "printf.h"
#include "struct.h"

void print_big_stars(int big_stars)
{
    for (int i = 0; i < big_stars; i++) {
        my_printf("*");
    }
    my_printf("\n");
}

void print_space_before(int space_b)
{
    for (int i = 0; i < space_b; i++)
        my_printf(" ");
}

void print_stick(int stick)
{
    for (int i = 0; i < stick; i++)
        my_printf("|");
}

void print_space_after(int space_a)
{
    for (int i = 0; i < space_a; i++)
        my_printf(" ");
}

void display_match(map_t match, int n)
{
    int big_stars = ((n * 2) + 1);

    print_big_stars(big_stars);
    for (int i = 0; match.stick[i] != -1; i++) {
        my_printf("*");
        print_space_before(match.space_b[i]);
        print_stick(match.stick[i]);
        print_space_after(match.space_a[i]);
        my_printf("*\n");
    }
    print_big_stars(big_stars);
}
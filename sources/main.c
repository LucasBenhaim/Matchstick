/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main for minishell01
*/

#include <stddef.h>
#include "arguments.h"
#include "my_function.h"
#include "matchstick.h"

int main(int ac, char **av, char **env)
{
    int win = 0;

    if (check_arg(ac, av, env) == 84)
        return (84);
    if (ac == 3)
        win = matchstick(av[1], av[2]);
    return (win);
}

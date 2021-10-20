/*
** EPITECH PROJECT, 2021
** check_arg.c
** File description:
** check_arg fonction
*/

#include <stddef.h>
#include "my_function.h"

int check_nm(char **av)
{
    int n = my_getnbr(av[1]);
    int m = my_getnbr(av[2]);

    if (n < 2 || n > 99)
        return (84);
    if (m < 1)
        return (84);
    return (0);
}

int check_arg(int ac, char **av, char **env)
{
    if (env == NULL)
        return (84);
    if (ac < 3 || ac > 3)
        return (84);
    if (ac == 3) {
        for (int i = 1; av[i]; i++) {
            if (my_str_isnum(av[i]) == 84)
                return (84);
        }
        if (check_nm(av) == 84)
            return (84);
    }
    return (0);
}

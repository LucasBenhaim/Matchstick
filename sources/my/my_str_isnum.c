/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** is digit
*/

int my_str_isnum(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (84);
    }
    return (0);
}

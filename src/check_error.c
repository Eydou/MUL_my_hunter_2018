/*
** EPITECH PROJECT, 2018
** check_error.c
** File description:
** check_error
*/

#include "../include/my_src.h"

int check_error(int ac, char **av)
{
    if (ac > 2) {
        my_putstr("Error argument\n");
        return (84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_help();
        return (0);
    } else if (av[1][0] == '-' && av[1][1] != 'h') {
        my_putstr("Error flag\n");
        return (84);
    }
}

/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "include/my_src.h"

int main(int ac, char **av)
{
    sfRenderWindow *window;
    bckgrd_t *bckgrd = my_struct_bckgrd(bckgrd, window);
    sfVideoMode mode = {1280, 720, 32};
    obst_t *obst = my_struct_dracau(obst, window);
    sfMusic *music = sfMusic_createFromFile("music/music1.wav");
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);

    window = sfRenderWindow_create(mode, "Dracau Hunter",
    sfResize | sfClose,
    NULL);
    if (ac == 1) {
        my_start(bckgrd, window, obst);
        sfRenderWindow_destroy(window);
    }
    else if (ac > 1 && check_error(ac, av) == 84)
        return (84);
    sfMusic_destroy(music);
    sfMusic_destroy(obst->m_ball);
    return (0);
}

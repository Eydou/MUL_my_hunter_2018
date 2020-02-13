/*
** EPITECH PROJECT, 2019
** my_bckground.
** File description:
** my_background.
*/

#include "../include/my_src.h"

int my_bckgrd(bckgrd_t *bckgrd, sfRenderWindow *window, obst_t *obst)
{
    sfText_setString(bckgrd->text, my_itoa(obst->score));
    sfRenderWindow_drawSprite(window, bckgrd->sprite_bckgrd, NULL);
    sfRenderWindow_drawText(window, bckgrd->text, NULL);
}

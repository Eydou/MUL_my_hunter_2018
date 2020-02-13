/*
** EPITECH PROJECT, 2019
** my_dracau.
** File description:
** my_dracau.
*/

#include "../include/my_src.h"

void my_dracau(obst_t *obst, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, obst->sprite_drac, NULL);
    move_rect_o1(obst, obst->anim_drac, 175, 375);
    move_sprite_dracau(obst, obst->x, obst->y);
}

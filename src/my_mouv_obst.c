/*
** EPITECH PROJECT, 2019
** mouv_srpite.
** File description:
** mouv_sprite.
*/

#include "../include/my_src.h"

void move_sprite_dracau(obst_t *obst, int x, int y)
{
    sfVector2f pos_drac = vect_create_obst(x, y);
    sfSprite_setPosition(obst->sprite_drac, pos_drac);
}

/*
** EPITECH PROJECT, 2019
** my_struct_bat.c
** File description:
** my_struct_bat.
*/

#include "../include/my_src.h"

void move_rect_o1(obst_t *obst, sfIntRect rect, int offset, int max)
{
    if (obst->seconds > 0.1) {
        obst->anim_drac.left = obst->anim_drac.left + offset;
        if (obst->anim_drac.left + offset >= max)
            obst->anim_drac.left = 0;
        sfClock_restart(obst->clock);
        sfSprite_setTextureRect(obst->sprite_drac, obst->anim_drac);
    }
}

sfIntRect rect_i(obst_t *obst, int left, int width, int height)
{
    obst->anim_drac.top = 0;
    obst->anim_drac.left = left;
    obst->anim_drac.width = width;
    obst->anim_drac.height = height;
}

sfVector2f vect_create_obst(int x, int y)
{
    sfVector2f vect_obst;

    vect_obst.x = x;
    vect_obst.y = y;

    return (vect_obst);
}

obst_t *my_struct_dracau(obst_t *obst, sfRenderWindow *window)
{
    obst = malloc(sizeof(obst_t));
    obst->sprite_drac = sfSprite_create();
    obst->cursor_sprite = sfSprite_create();
    obst->drac = sfTexture_createFromFile("pictures/dracau1.png", NULL);
    obst->cursor = sfTexture_createFromFile("pictures/pokeball.png", NULL);
    rect_i(obst, 0, 175, 110);
    sfSprite_setTexture(obst->sprite_drac, obst->drac, sfTrue);
    sfSprite_setTexture(obst->cursor_sprite, obst->cursor, sfTrue);
    sfSprite_setTextureRect(obst->sprite_drac, obst->anim_drac);
    sfSprite_setPosition(obst->sprite_drac, obst->pos_drac);
    obst->clock = sfClock_create();
    obst->m_ball = sfMusic_createFromFile("music/sound_ball.wav");
    obst->life = 3;
    obst->pos_cursor = vect_create_obst(0, 0);
    obst->x = -600;
    obst->y = 345;
    obst->speed = 1;

    return (obst);
}

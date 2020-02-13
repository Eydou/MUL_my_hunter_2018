/*
** EPITECH PROJECT, 2019
** my_event.
** File description:
** my_event.
*/

#include "../include/my_src.h"

static int is_a_hit(obst_t *obst, sfEvent event)
{
    obst->pos_cpy = sfSprite_getPosition(obst->sprite_drac);
    if (event.mouseButton.x <= obst->pos_cpy.x + 165 &&
        event.mouseButton.x >= obst->pos_cpy.x - 165 &&
        event.mouseButton.y <= obst->pos_cpy.y + 100 &&
        event.mouseButton.y >= obst->pos_cpy.y + 30)
        return (1);
}

void my_event_type(sfRenderWindow *window, sfEvent event, obst_t *obst)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtMouseButtonPressed) {
            if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
                is_a_hit(obst, event) == 1) {
                sfMusic_play(obst->m_ball);
                obst->x = -600;
                obst->y = rand() % (550 - 60) + - 60;
                obst->score = obst->score + 1;
                obst->speed = obst->speed + 0.3;
            }
        }
        if (sfEvtMouseMoved) {
            obst->pos_cursor = vect_create_obst(event.mouseMove.x - 39,
            event.mouseMove.y - 35);
            sfSprite_setPosition(obst->cursor_sprite, obst->pos_cursor);
        }
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

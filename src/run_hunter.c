/*
** EPITECH PROJECT, 2018
** run_slayer.
** File description:
** run_slayer.
*/

#include "../include/my_src.h"

int my_speed_up(obst_t *obst, bckgrd_t *bckgrd)
{
    obst->time = sfClock_getElapsedTime(obst->clock);
    obst->seconds = obst->time.microseconds / 1000000.0;
    if (obst->seconds > 0.09) {
        obst->x = obst->x + obst->speed;
        if (obst->x >= 1200) {
            obst->y = rand()%(550 - 60) + -60;
            obst->x = -600;
            obst->life--;
        }
        if (obst->life == 0) {
            my_putstr("Well Played :p score: ");
            my_put_nbr(obst->score);
            my_putstr(" level: ");
            my_put_nbr(bckgrd->level);
            my_putchar('\n');
            return (0);
        }
    }
}

int my_start(bckgrd_t *bckgrd, sfRenderWindow *window, obst_t *obst)
{
    sfEvent event;
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);

    while (sfRenderWindow_isOpen(window)) {
        if (my_speed_up(obst, bckgrd) == 0)
            return (0);
        my_bckgrd(bckgrd, window, obst);
        if (obst->score > 20) {
            sfRenderWindow_drawSprite(window, bckgrd->sprite_alola, NULL);
            sfText_setString(bckgrd->text, my_itoa(obst->score));
            sfRenderWindow_drawText(window, bckgrd->text, NULL);
            bckgrd->level = 2;
        }
        my_dracau(obst, window);
        my_event_type(window, event, obst);
        sfSprite_setPosition(obst->cursor_sprite, obst->pos_cursor);
        sfRenderWindow_drawSprite(window, obst->cursor_sprite, NULL);
        sfRenderWindow_display(window);
    }
    return (0);
}

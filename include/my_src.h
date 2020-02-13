/*
** EPITECH PROJECT, 2018
** my_src
** File description:
** my_src.
*/

#ifndef RUNNER_H
#define RUNNER_H
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Sound.h>
#include <SFML/System.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <SFML/Graphics.h>

typedef struct bckgrd {
    sfTexture *bckgrd;
    sfTexture *bckgrd_alola;
    sfSprite *sprite_bckgrd;
    sfSprite *sprite_alola;
    sfVector2f pos_bckgrd;
    sfTime time;
    sfFont* font;
    sfText* text;
    sfText* txtscore;
    sfClock *clock;
    float seconds;
    int level;
} bckgrd_t;

typedef struct obst {
    sfTexture *drac;
    sfTexture *cursor;
    sfSprite *sprite_drac;
    sfSprite *cursor_sprite;
    sfIntRect anim_drac;
    sfVector2f pos_drac;
    sfVector2f pos_cursor;
    sfVector2f pos_cpy;
    sfTime time;
    sfClock *clock;
    float seconds;
    sfMusic *m_ball;
    int x;
    int y;
    int life;
    int score;
    double speed;
    sfVector2f mouse;
} obst_t;

bckgrd_t *my_struct_bckgrd(bckgrd_t *bckgrd, sfRenderWindow *window);
obst_t *my_struct_dracau(obst_t *obst, sfRenderWindow *window);


sfMusic *play_music(sfMusic *sound);
int my_bckgrd(bckgrd_t *bckgrd, sfRenderWindow *window, obst_t *obst);
void my_help(void);
void sound_destroy(sfMusic *sound);
int my_printf(char *s, ...);

void move_rect_2(bckgrd_t *bckgrd, sfIntRect rect, int offset, int max);
void move_rect_o1(obst_t *obst, sfIntRect rect, int offset, int max);


int my_start(bckgrd_t *bckgrd, sfRenderWindow *window, obst_t *obst);

void my_dracau(obst_t *obst, sfRenderWindow *window);

void my_event_type(sfRenderWindow *window, sfEvent event, obst_t *obst);
void my_obstacle(sfRenderWindow *window);
int check_error(int ac, char **av);
sfVector2f vect_create_obst(int x, int y);
sfVector2f vect_create1(int x, int y);
void move_sprite_dracau(obst_t *obst, int x, int y);

int my_putstr(char const *str);
int my_strlen(char const *str);
int my_putstr(char const *str);
char *my_itoa(int nb);
int my_put_nbr(int nb);
int my_atoi(char const *str);
void my_putchar(char c);

#endif /*my_runner*/

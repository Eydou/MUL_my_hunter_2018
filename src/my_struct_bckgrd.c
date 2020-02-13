
/*
** EPITECH PROJECT, 2019
** my_struct_bckgrd.
** File description:
** bckgrd.
*/

#include "../include/my_src.h"

void my_setup_bckgrd(bckgrd_t *bckgrd, sfRenderWindow *window)
{
    sfSprite_setTexture(bckgrd->sprite_bckgrd, bckgrd->bckgrd, sfTrue);
    sfSprite_setTexture(bckgrd->sprite_alola, bckgrd->bckgrd_alola,
    sfTrue);
    bckgrd->level = 1;
}

bckgrd_t *my_struct_bckgrd(bckgrd_t *bckgrd, sfRenderWindow *window)
{
    bckgrd = malloc(sizeof(bckgrd_t));
    bckgrd->sprite_bckgrd = sfSprite_create();
    bckgrd->sprite_alola = sfSprite_create();
    bckgrd->bckgrd = sfTexture_createFromFile("pictures/town.png", NULL);
    bckgrd->bckgrd_alola = sfTexture_createFromFile("pictures/alola.png", NULL);
    bckgrd->font = sfFont_createFromFile("my_font/pixel.ttf");
    bckgrd->text = sfText_create();
    bckgrd->txtscore = sfText_create();
    sfText_setFont(bckgrd->text, bckgrd->font);
    sfText_setFont(bckgrd->txtscore, bckgrd->font);
    sfText_setCharacterSize(bckgrd->text, 30);
    my_setup_bckgrd(bckgrd, window);

    return (bckgrd);
}

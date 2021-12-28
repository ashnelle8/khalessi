/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "./includes/framebuffer.h"

void my_draw_square1(framebuffer_t *buffer , sfVector2i position ,
                    int size)
{
    int i, j;

    for (i = position.x; i <= position.x + size; i++) {
        for (j = position.y; j <= position.y + size; j++) {
            my_put_pixel(buffer, i, j, sfCyan);
        }
    }
}

void my_draw_square2(framebuffer_t *buffer , sfVector2i position ,
                    int size)
{
    int i, j;

    for (i = position.x; i <= position.x + size; i++) {
        for (j = position.y; j <= position.y + size; j++) {
            my_put_pixel(buffer, i, j, sfYellow);
        }
    }
}

void my_draw_square3(framebuffer_t *buffer , sfVector2i position ,
                    int size)
{
    int i, j;

    for (i = position.x; i <= position.x + size; i++) {
        for (j = position.y; j <= position.y + size; j++) {
            my_put_pixel(buffer, i, j, sfRed);
        }
    }
}

void my_draw_square4(framebuffer_t *buffer , sfVector2i position ,
                    int size)
{
    int i, j;

    for (i = position.x; i <= position.x + size; i++) {
        for (j = position.y; j <= position.y + size; j++) {
            my_put_pixel(buffer, i, j, sfWhite);
        }
    }
}

void my_draw_square5(framebuffer_t *buffer , sfVector2i position ,
                    int size)
{
    int i, j;

    for (i = position.x; i <= position.x + size; i++) {
        for (j = position.y; j <= position.y + size; j++) {
            my_put_pixel(buffer, i, j, sfMagenta);
        }
    }
}



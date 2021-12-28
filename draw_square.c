/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "./includes/framebuffer.h"

void my_draw_square(framebuffer_t *buffer , sfVector2i position ,
                    int size)
{
    int i, j;

    for (i = position.x; i <= position.x + size; i++) {
        for (j = position.y; j <= position.y + size; j++) {
            my_put_pixel(buffer, i, j, sfBlue);
        }
    }
}

void my_draw_line(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfYellow);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }
        
}

/*
** EPITECH PROJECT, 2021
** circle
** File description:
** circle
*/

#include "./includes/framebuffer.h"

int draw_circle1(framebuffer_t *framebuffer , sfVector2i center , int radius)
{
    int i;
    int j;
//    float a;
//    my_put_pixel(framebuffer, 750, 400, sfRed);    
    for (i = center.x - radius; i <= center.x + radius; i++) {
        for (j = center.y -radius; j <= center.y + radius; j++) {
            if (pow(i - center.x, 2) + pow(j - center.y, 2) <= pow(radius, 2)) {
                my_put_pixel(framebuffer, j, i, sfRed);
/*                center.x = 800 / 2 + 800 / 2 * sin(a);
                center.y = 600 / 2;
                a += 0.03;*/
            }
        }
    }
    return 0;
}

int draw_circle2(framebuffer_t *framebuffer , sfVector2i center , int radius)
{
    int i;
    int j;

    for (i = center.x - radius; i <= center.x + radius; i++) {
        for (j = center.y -radius; j <= center.y + radius; j++) {
            if (pow(i - center.x, 2) + pow(j - center.y, 2) <= pow(radius, 2))
                my_put_pixel(framebuffer, j, i, sfYellow);
        }
    }
    return 0;
}

int draw_circle3(framebuffer_t *framebuffer , sfVector2i center , int radius)
{
    int i;
    int j;

    for (i = center.x - radius; i <= center.x + radius; i++) {
        for (j = center.y -radius; j <= center.y + radius; j++) {
            if (pow(i - center.x, 2) + pow(j - center.y, 2) <= pow(radius, 2))
                my_put_pixel(framebuffer, j, i, sfBlue);
        }
    }
    return 0;
}

int draw_circle4(framebuffer_t *framebuffer , sfVector2i center , int radius)
{
    sfColor s;
    s.r = 4;
    s.g = 105;
    s.b = 80;
    s.a = 6;
    
    int i;
    int j;

    for (i = center.x - radius; i <= center.x + radius; i++) {
        for (j = center.y -radius; j <= center.y + radius; j++) {
            if (pow(i - center.x, 2) + pow(j - center.y, 2) <= pow(radius, 2)) 
                my_put_pixel(framebuffer, j, i,s);
        }
    }
    return 0;
}

int draw_circle5(framebuffer_t *framebuffer , sfVector2i center , int radius)
{
    int i;
    int j;

    for (i = center.x - radius; i <= center.x + radius; i++) {
        for (j = center.y -radius; j <= center.y + radius; j++) {
            if (pow(i - center.x, 2) + pow(j - center.y, 2) <= pow(radius, 2))
                my_put_pixel(framebuffer, j, i, sfGreen);
        }
    }
    return 0;
}

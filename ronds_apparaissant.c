/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "./includes/framebuffer.h"

int draw_circle4_1(framebuffer_t *framebuffer , sfVector2i center , int radius)
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
                my_put_pixel(framebuffer, i, j,s);
        }
    }
    return 0;
}

int draw_circle4_2(framebuffer_t *framebuffer , sfVector2i center , int radius)
{
    sfColor s;
    s.r = 75;
    s.g = 4;
    s.b = 59;
    s.a = 200;

    int i;
    int j;
//    my_put_pixel(framebuffer, 750, 400, sfRed);
    for (i = center.x - radius; i <= center.x + radius; i++) {
	for (j = center.y -radius; j <= center.y + radius; j++) {
            if (pow(i - center.x, 2) + pow(j - center.y, 2) <= pow(radius, 2))
		my_put_pixel(framebuffer, i, j,s);
	}
    }
    return 0;
}

int draw_circle4_3(framebuffer_t *framebuffer , sfVector2i center , int radius)
{
    sfColor s;
    s.r = 250;
    s.g = 18;
    s.b = 2;
    s.a = 74;

    int i;
    int j;

    for (i = center.x - radius; i <= center.x + radius; i++) {
	for (j = center.y -radius; j <= center.y + radius; j++) {
            if (pow(i - center.x, 2) + pow(j - center.y, 2) <= pow(radius, 2))
		my_put_pixel(framebuffer, i, j,s);
	}
    }
    return 0;
}

int draw_circle4_4(framebuffer_t *framebuffer , sfVector2i center , int radius)
{
    sfColor s;
    s.r = 20;
    s.g = 199;
    s.b = 42;
    s.a = 109;

    int i;
    int j;

    for (i = center.x - radius; i <= center.x + radius; i++) {
	for (j = center.y -radius; j <= center.y + radius; j++) {
            if (pow(i - center.x, 2) + pow(j - center.y, 2) <= pow(radius, 2))
		my_put_pixel(framebuffer, i, j,s);
	}
    }
    return 0;
}

int draw_circle4_5(framebuffer_t *framebuffer , sfVector2i center , int radius)
{
    sfColor s;
    s.r = 102;
    s.g = 61;
    s.b = 12;
    s.a = 73;

    int i;
    int j;

    for (i = center.x - radius; i <= center.x + radius; i++) {
	for (j = center.y -radius; j <= center.y + radius; j++) {
            if (pow(i - center.x, 2) + pow(j - center.y, 2) <= pow(radius, 2))
		my_put_pixel(framebuffer, i, j,s);
	}
    }
    return 0;
}

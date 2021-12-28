/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/


#include "./includes/framebuffer.h"

void my_draw_line1(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfYellow);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

void my_draw_line2(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfWhite);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

void my_draw_line3(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfRed);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

void my_draw_line4(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfTransparent);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

void my_draw_line5(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfCyan);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

void my_draw_line6(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfMagenta);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

void my_draw_line7(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfGreen);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

void my_draw_line8(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfRed);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

void my_draw_line9(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfYellow);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

void my_draw_line10(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfGreen);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

void my_draw_line11(framebuffer_t *k, sfVector2u p, unsigned int size)
{
    int j;
    for (j = 0; j < size; j++) {
        p.y = p.x + j;
        my_put_pixel(k, p.x, p.y, sfBlue);
        p.x = p.x + 20;
        p.y = p.y + 20;
    }

}

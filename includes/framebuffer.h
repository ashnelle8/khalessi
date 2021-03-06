/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h>

typedef struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);

void framebuffer_destroy(framebuffer_t *framebuffer);

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);

int draw_circle1(framebuffer_t *framebuffer , sfVector2i center , int radius);

int draw_circle2(framebuffer_t *framebuffer , sfVector2i center , int radius);

int draw_circle3(framebuffer_t *framebuffer , sfVector2i center , int radius);

int draw_circle4_1(framebuffer_t *framebuffer , sfVector2i center , int radius);

int draw_circle4_2(framebuffer_t *framebuffer , sfVector2i center , int radius);

int draw_circle4_3(framebuffer_t *framebuffer , sfVector2i center , int radius);

int draw_circle4_4(framebuffer_t *framebuffer , sfVector2i center , int radius);

int draw_circle4_5(framebuffer_t *framebuffer , sfVector2i center , int radius);

int draw_circle5(framebuffer_t *framebuffer , sfVector2i center , int radius);

void my_draw_square1(framebuffer_t *buffer , sfVector2i position ,
                    int size);

void my_draw_square2(framebuffer_t *buffer , sfVector2i position ,
                    int size);

void my_draw_square3(framebuffer_t *buffer , sfVector2i position ,
                    int size);

void my_draw_square4(framebuffer_t *buffer , sfVector2i position ,
                    int size);

void my_draw_square5(framebuffer_t *buffer , sfVector2i position ,
                    int size);

void my_draw_line1(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line2(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line3(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line4(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line5(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line6(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line7(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line8(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line9(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line10(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line11(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line20(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line21(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line22(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line23(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line24(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line25(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line26(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line27(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line28(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line29(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line30(framebuffer_t *k, sfVector2u p, unsigned int size);

void my_draw_line31(framebuffer_t *k, sfVector2u p, unsigned int size);

int main(int ac, char **av);

int ensemble();

int ok();

int pointilles();
//void affichage(void);
int lignes();

int usage();

int my_putstr(char const *str);

void my_putchar(char c);

int faits();

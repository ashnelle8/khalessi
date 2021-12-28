/*
** EPITECH PROJECT, 2021
** framebuffer
** File description:
** framebuffer
*/

#include "./includes/framebuffer.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
 framebuffer_t *kiss = malloc(sizeof(framebuffer_t));
    kiss->width = width;
    kiss->height = height;
    kiss->pixels = malloc(sizeof(sfUint8) * (width * height * 4));

    return (kiss);
}

void framebuffer_destroy(framebuffer_t *framebuffer)
{
free(framebuffer->pixels);
    free(framebuffer);
}

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color)
{
    if (x < 0 || y < 0)
        return ;
//    printf("w = %d, h = %d, x = %d, y =  %d\n", framebuffer->width, framebuffer->height, x , y);
    if (x > framebuffer->width || y > framebuffer->height)
        //       printf("lola");
	return ;
 
    framebuffer->pixels[(framebuffer->width * x + y) * 4] = color.r;
    framebuffer->pixels[(framebuffer->width * x + y) * 4 + 1] = color.g;
    framebuffer->pixels[(framebuffer->width * x + y) * 4 + 2] = color.b;
    framebuffer->pixels[(framebuffer->width * x + y) * 4 + 3] = color.a;
}

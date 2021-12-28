/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "./includes/framebuffer.h"


int ensemble()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;
    sfVector2i V;
    V.y = 10;
    V.x = 20;

    sfVector2i B;
    B.y = 500;
    B.x = 200;

    sfVector2i H;
    H.y = 100;
    H.x = 280;

    sfVector2i D;
    D.y = 123;
    D.x = 123;

    sfVector2i Y;
    Y.y = 1000;
    Y.x = 500;

  sfVector2i K;
  K.y = 623;
  K.x = 523;

    sfClock *clock;
    sfTime time;
    float seconds;
    int i, j, k, d, p;
    d = 0;
    i = 0;
    k = 0;
    p = 0;
    j = 0;
    int size = 200;
    clock = sfClock_create();
  
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;

    framebuffer = framebuffer_create(800, 600);

    texture = sfTexture_create(800, 600);
    if (!texture)
        return EXIT_FAILURE;
    sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);

    sfRenderWindow_setFramerateLimit(window, 1500);

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        /* Draw the pixel at (100,100) in the framebuffer */
        // my_put_pixel(framebuffer, 100, 100, sfRed);
              time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 0.0001 && i < size && j < size && k < size && d < size && p < size)
        {
            draw_circle4_1(framebuffer, K, d);
            d++;
            draw_circle4_2(framebuffer, B, j);
            j++;
            draw_circle4_3(framebuffer, H, i);
            i++;
            draw_circle4_4(framebuffer, D, k);
            k++;
            draw_circle4_5(framebuffer, Y, p);
            p++;
            sfClock_restart(clock);
        }       
//          my_draw_line(framebuffer, K, 100);
my_draw_square(framebuffer, K, 410);*/

        affichage();
        
        sfTexture_updateFromPixels(texture, framebuffer->pixels, 800, 600, 0, 0);

        sfRenderWindow_clear(window, sfBlack);

        sfRenderWindow_drawSprite(window, sprite, NULL);

        sfRenderWindow_display(window);
    }
    
    /* Cleanup resources */
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
}

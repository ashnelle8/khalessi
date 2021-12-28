/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "./includes/framebuffer.h"

int lignes()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;
    sfVector2u V;
    V.y = 10;
    V.x = 20;
    sfVector2u B;
    B.y = 500;
    B.x = 200;
    sfVector2u H;
    H.y = 100;
    H.x = 280;
    sfVector2u D;
    D.y = 123;
    D.x = 123;
    sfVector2u Y;
    Y.y = 1000;
    Y.x = 500;
    sfVector2u K;
    K.y = 623;
    K.x = 523;
    sfVector2u O;
    O.y = 100;
    O.x = 200;
    sfVector2u P;
    P.y = 500;
    P.x = 35;
    sfVector2u A;
    A.y = 10;
    A.x = 280;
    sfVector2u C;
    C.y = 623;
    C.x = 123;
    sfVector2u M;
    M.y = 10;
    M.x = 550;
    sfVector2u F;
    F.y = 623;
    F.x = 23;
    sfVector2u E;
    E.y = 23;
    E.x = 523;
    sfClock *clock;
    sfTime time;
    float seconds;
    int i, j, k, d, p, t, y, z, e, a, o;
    d = i = j = k = p = t = y = z = e = a = o = 0;
    int size = 2000;
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
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 0.35 && i < size && j < size && k < size && d < size && p < size) {
            my_draw_line20(framebuffer, V, d);
            d++;
            my_draw_line21(framebuffer, B, d);
            p++;
            my_draw_line22(framebuffer, H, d);
            j++;
            my_draw_line23(framebuffer, D, d);
            i++;
            my_draw_line24(framebuffer, Y, d);
            d++;
            my_draw_line25(framebuffer, K, d);
            d++;
            my_draw_line26(framebuffer, O, d);
            d++;
            my_draw_line27(framebuffer, P, d);
            d++;
            my_draw_line28(framebuffer, A, d);
            d++;
            my_draw_line29(framebuffer, C, d);
            d++;
            my_draw_line30(framebuffer, M, d);
            d++;
            sfClock_restart(clock);
        }     
        sfTexture_updateFromPixels(texture, framebuffer->pixels, 800, 600, 0, 0);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
}

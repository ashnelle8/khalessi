/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/


#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>


//#include "./includes/framebuffer.h"

/*
int main()
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = 800;
    video_mode.height = 800;
    video_mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(video_mode,
                                   "MyScreenSaver",
                                   sfDefaultStyle,
                                   NULL);
    while (sfRenderWindow_isOpen(window))
    {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}
*/

void analyse_event(sfRenderWindow *window, sfEvent event)
{
       while (sfRenderWindow_pollEvent(window, &event))
    {
        if (event.type == sfEvtClosed)                                                                                           
            sfRenderWindow_close(window);
    }

}

sfRenderWindow *createMyWindow(unsigned int width,
                               unsigned int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfEvent event;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(video_mode,
                                   "MyScreenSaver",
                                   sfDefaultStyle,
                                   NULL);
    
    while (sfRenderWindow_isOpen(window))
    {
        sfRenderWindow_display(window);
        analyse_event(window, event);
    }
//    sfRenderWindow_close(window);
    sfRenderWindow_destroy(window);
    
    return (window);
}

int main()
{
    sfRenderWindow *j = createMyWindow(800, 800);
}    
/*
typedef struct s_framebuffer
{
    unsigned char *pixels;
    unsigned int width;
    unsigned int height;
} framebuffer_t;
*/
/*
int main()
{
    sfRenderWindow *window;
    framebuffer_t *fb;
    sfTexture *texture;
    sfSprite *sprite;

    window = createMyWindow(800, 800);
    fb = framebuffer_create(800, 800);
    texture = sfTexture_create(800, 800);
    sprite =  sfSprite_create();

    while (sfRenderWindow_isOpen(window)) {
        my_put_pixel(fb, 200, 200, sfRed);
        sfTexture_updateFromPixels(texture,
                                   fb->pixels,
                                   800, 800,
                                   0, 0);
        sfSprite_setTexture(sprite, texture, sfFalse);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }

    sfRenderWindow_destroy(window);
    framebuffer_destroy(fb);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite);
}
*/

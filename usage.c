/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "./includes/framebuffer.h"

int usage()
{
    my_putstr("animation rendering in a CSFML window.\n");
    my_putstr("USAGE\n");
    my_putstr(" ./my_screensaver [OPTIONS] animation_id\n");
    my_putstr(" animation_id  ID of the animation to process (between 1 and 4).\n");
    my_putstr("OPTIONS\n");
    my_putstr("-d            print the description of all the animations and quit.\n");
    my_putstr("-h            print the usage and quit.\n");
}

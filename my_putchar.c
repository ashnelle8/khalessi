/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "./includes/framebuffer.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

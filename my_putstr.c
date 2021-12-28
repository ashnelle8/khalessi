/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "./includes/framebuffer.h"

int my_putstr(char const *str)
{
    int b = 0;
    while (str[b] != '\0') {
        my_putchar(str[b]);
        b++;
    }
    return (0);
}

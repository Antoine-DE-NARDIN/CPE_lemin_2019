/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** otherfunc
*/

#include "lemin.h"

int my_strlen(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
        i = i + 1;
    return (i);
}
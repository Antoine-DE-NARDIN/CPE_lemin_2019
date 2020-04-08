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

int my_strcmp(char *str1, char *str2)
{
    for (int i = 0; str1[i] == str2[i]; i = i + 1) {
        if (str1[i] == '\0' && str2[i] == '\0')
            return (0);
        if ((str1[i] != '\0' && str2[i] == '\0') ||
(str1[i] == '\0' && str2[i] != '\0'))
            return (-1);
    }
}
/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** create_link
*/

#include "lemin.h"

int main(int ac, char **av)
{   
    size_t zone = 0;
    char *input = malloc(sizeof(char) * 4096);
    int i = 0;
        
    if (ac != 1) {
        return (84);
    } else {
        i = getline(&input, &zone, stdin);
        if (i == -1)
            return (84);
        else
            parse_input(input);
    } 
    return (0);
}
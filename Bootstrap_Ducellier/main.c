/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** create_link
*/

#include "graph.h"

typedef link_t *list_t; 

link_t *create_link(int data, list_t *list)
{
    link_t *new_link = malloc(sizeof(link_t));
    new_link->data = data;
    new_link->next = *list;
    *list = new_link;
}

void print_link(link_t *link, list_t *list)
{
    
}

int main(int ac, char **av)
{
    return (0);
}
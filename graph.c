/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** graph
*/

#include "lemin.h"

link_t *create_link(int data)
{
    link_t *new_link = malloc(sizeof(link_t));
    new_link->data = data;
    new_link->next = NULL;
    return (new_link);
}

void print_link(link_t *link)
{
    printf("%d\n", link->data);
}

void connect_links1(link_t *link1, link_t *link2)
{
    link1->next = link2;
}

void connect_links2(link_t *link1, link_t *link2)
{
    link1->next2 = link2;
}

void print_data_of_connected_links1(link_t *link)
{
    link_t *link3;
    link3 = link;

    while (link3 != NULL) {
        print_link(link3);
        link3 = link3->next; 
    }
}
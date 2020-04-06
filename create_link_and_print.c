/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** create_link_and_print
*/

#include "lemin.h"

void print_data_of_connected_links2(link_t *link)
{
    link_t *link3;
    link3 = link;

    while (link3 != NULL) {
        print_link(link3);
        link3 = link3->next2; 
    }
}

link_t *build_graph2(void)
{
    link_t *link1;
    link_t *link2;
    link_t *link3;
    link_t *link4;
    link_t *link5;
    link_t *link6;
    link_t *link7;
    link_t *link8;
    connect_links1(link1, link2);
    connect_links1(link2, link3);
    connect_links2(link1, link4);
    connect_links2(link4, link5);
    connect_links2(link5, link6);
    connect_links2(link6, link7);
    connect_links1(link6, link8);
}

link_t *build_my_graph(void)
{
    link_t *link1;
    link_t *link2;
    link_t *link3;
    link_t *link4;
    link_t *link5;
    link_t *link6;
    link_t *link7;
    link_t *link8;
    link1 = create_link(42);
    link2 = create_link(60012);
    link3 = create_link(30012);
    link4 = create_link(48);
    link5 = create_link(50012);
    link6 = create_link(3);
    link7 = create_link(98);
    link8 = create_link(8);
    build_graph2();
    return (link1);
}


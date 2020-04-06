/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** lemin
*/

#ifndef LEMIN_H
#define LEMIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

typedef struct link
{
    int data;
    int index;
    struct link *next;
    struct link *next2;
} link_t ;

void parse_input(char **info);
char **extract_info(char **info);
int file_size(void);
int my_strlen(char *str);

//connect link and create link
link_t *create_link(int data);
void connect_links1(link_t *link1, link_t *link2);
void connect_links2(link_t *link1, link_t *link2);

//print link
void print_link(link_t *link);
void print_data_of_connected_links1(link_t *link);
void print_data_of_connected_links2(link_t *link);

//build the graph
link_t *build_my_graph(void);
link_t *build_graph2(void);

#endif
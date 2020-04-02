/*
** EPITECH PROJECT, 2019
** leminguay.h
** File description:
** ok
*/

#ifndef LEMINGUAY_H
#define LEMINGUAY_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct link
{
    int data;
    int index;
    struct link *next;
    struct link *next2;
} link_t ;

#endif
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
    struct link *next;
} link_t ;

#endif
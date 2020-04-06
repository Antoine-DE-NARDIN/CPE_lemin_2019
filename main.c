/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** create_link
*/

#include "lemin.h"

int main(int ac, char **av)
{
    int i = 0;
    size_t zone = 0;
    char *input = malloc(sizeof(char) * 6);
    char **info = NULL;

    i = getline(&input, &zone, stdin);
    if (i == -1) {
        free(input);
        return (84);
    }else {
        info = extract_info(info);
        for (int x = 0; info[x] != NULL; x = x + 1)
            printf("%s\n", info[x]);
    }
    return (0);
}

char **extract_info(char **info)
{
    size_t zone = 0;
    char *input = malloc(sizeof(char) * 6);
    int i = 0;
    int j = file_size();

    info = malloc(sizeof(char *) * j + 1);
    j = 0;
    printf("chibre\n");
    while (i != -1) {
        printf("chibre1\n");
        i = getline(&input, &zone, stdin);
        printf("%s\n", input);
        info[j] = malloc(sizeof(char) * (my_strlen(input) + 1));
        info[j] = input;
        info[j][my_strlen(input) + 1] = '\0';
        j = j + 1;
    }
    info[j + 1] = NULL;
    return (info);
}

int file_size(void)
{
    size_t zone = 0;
    char *input = malloc(sizeof(char) * 6);
    int i = 0;
    int j = 1;

    while (i != -1) {
        i = getline(&input, &zone, stdin);
        j = j + 1;
    }
    return (j);
}
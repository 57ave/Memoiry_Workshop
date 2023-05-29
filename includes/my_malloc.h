/*
** EPITECH PROJECT, 2023
** Memory_Workshop
** File description:
** malloc
*/

#ifndef MALLOC_H_
    #define MALLOC_H_
    #include <stdlib.h>
    #include <stdbool.h>

void *my_malloc(size_t size);

struct metadata {
    size_t size;
    struct metadata *next;
    bool free;
};

struct metadata *meta = NULL;

#endif /* !MALLOC_H_ */

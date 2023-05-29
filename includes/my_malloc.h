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

typedef struct struct_metadata_s {
    size_t size;
    struct heap_s *next;
    bool free;
} struct_metadata_t;

#endif /* !MALLOC_H_ */

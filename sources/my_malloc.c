/*
** EPITECH PROJECT, 2023
** Memoiry_Workshop
** File description:
** my_malloc
*/

#include <unistd.h>
#include "my_malloc.h"

void *my_malloc(size_t size)
{
    void *metadata_memory_start = sbrk(sizeof(struct metadata));
    void *data_memory_start = NULL;

    if (metadata_memory_start == (void *)-1) {
        return NULL;
    }
    meta = metadata_memory_start;
    meta->size = size;
    meta->free = 1;
    meta->next = meta;
    data_memory_start = sbrk(size);
    if (data_memory_start == (void *)-1) {
        return NULL;
    }
    return data_memory_start;
}

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
    void *memory_start = sbrk(size);
    return memory_start;
}
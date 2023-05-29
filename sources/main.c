/*
** EPITECH PROJECT, 2023
** Memory Workshop
** File description:
** memory
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_malloc.h"

int main(int argc, char *argv[])
{
    char *string = my_malloc(sizeof(char) * 12);

    if (string == NULL) {
        return 84;
    }
    string = strcpy(string, "Hello World!");
    printf("string : %s\n", string);
    return 0;
}

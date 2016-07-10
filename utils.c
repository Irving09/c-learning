#include <printf.h>
#include <string.h>

#include "utils.h"

void barline() {
    printf("==========");
    newline();
}

void newline() {
    printf("\n");
}

void append(char* dest, char character) {
    strncat(dest, &character, 1);
}
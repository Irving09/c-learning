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

int indexOfStr(const char* str, char target) {
    size_t length = strlen(str);
    int i;
    for (i = 0; i < length; i++) {
        if (str[i] == target) {
            return i;
        }
    }
    return -1;
}

void println(const char* format, ...) {
    va_list vargs;
    va_start(vargs, format);
    vprintf(format, vargs);
    va_end(vargs);
    printf("\n");
}
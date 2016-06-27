/*
Have the function FirstReverse(str) take the str parameter being passed and return the string in reversed order.
Use the Parameter Testing feature in the box below to test your code with different arguments.
*/

#include <stdio.h>
#include <string.h>

#include "utils.h"

void firstReverse(char[]);
void swap(int, int, char*);

/*int main() {
//    char* str1 = "1a23456"; // UNMODIFIABLE if declared this way
    char str1[] = "1a23456";

    firstReverse(str1);
    printf("%s", str1);
    newline();
    return 0;
}*/

void firstReverse(char* str) {
    int i, length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        swap(i, length - i - 1, str);
    }
}

void swap(int i, int j, char* str) {
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
}
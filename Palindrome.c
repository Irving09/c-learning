#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

/*
 * Challenge
 * Using the C language, have the function Palindrome(str) take the str parameter being passed
 * and return the string true if the parameter is a palindrome, (the string is the same forward as it is backward)
 * otherwise return the string false.
 *
 * For example: "racecar" is also "racecar" backwards. Punctuation and numbers will not be part of the string.
 *
 * Sample Test Cases
 * Input:"never odd or even"
 * Output:"true"
 *
 * Input:"eye"
 * Output:"true"
 */

void Palindrome(const char*);

int main() {
    const char* input = "racecar";

    Palindrome(input);
    return 0;
}

void Palindrome(const char* string) {
    size_t length = strlen(string);
    char* buffer = malloc(sizeof(char) * length);

    size_t i;
    for (i = 0; i < length; i++) {
        if (isalpha(string[i])) {
            append(buffer, string[i]);
        }
    }

    length = strlen(buffer);

    for (i = 0; i < length / 2; i++) {
        if (tolower(buffer[i]) != tolower(buffer[length - i - 1])) {
            println("\"%s\" IS NOT a palindrome", string);
            return;
        }
    }

    println("%s IS a palindrome", string);


}
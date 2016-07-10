#include <printf.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

#include "utils.h"

/*
 *
 * Challenge Using the C language, have the function
 * LetterChanges(str) take the str parameter being passed
 * and modify it using the following algorithm.
 *
 * Replace every letter in the string with the letter following it
 * in the alphabet (ie. c becomes d, z becomes a).
 *
 * Then capitalize every vowel in this new string (a, e, i, o, u)
 * and finally return this modified string.
 *
 * Sample Test Cases
 * Input:"hello*3"
 * Output:"ifmmp*3"
 *
 * Input:"fun times!"
 * Output:"gvO Ujnft!"
 *
 */

void LetterChanges(const char*);

int main() {
    const char* input = "fun times!";

    LetterChanges(input);
    return 0;
}

void LetterChanges(const char* input) {
    const char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    const char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };

    int i; char c;
    size_t length = strlen(input);

    char* result = malloc(strlen(input) * sizeof(char));

    for (i = 0; i < length; i++) {

        if (isalpha(input[i])) {
            char replaced = alphabet[indexOfStr(alphabet, (char) tolower(input[i])) + 1];
            boolean isVowel = indexOfStr(vowels, replaced) >= 0;

            if (isVowel) {
                append(result, (char) toupper(replaced));
            } else {
                append(result, replaced);
            }
        } else {
            append(result, input[i]);
        }
    }

    println("result => %s", result);
}

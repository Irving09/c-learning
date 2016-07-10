#include <printf.h>
#include <string.h>
#include <stdlib.h>

#include "utils.h"

/*
 * Using the C language, have the function LongestWord(sen)
 * take the sen parameter being passed and return the largest word in the string.
 *
 * If there are two or more words that are the same length,
 * return the first word from the string with that length.
 *
 * Ignore punctuation and assume sen will not be empty.*/
void LongestWord(const char*);

//int main() {
//    const char* input = "ciao konnichiwa hello hiarigatougozaimasu hi hello . sdfsdf. sdfsdf hiarigatougozaimasusdjklfhslfjsdf";
//
//    LongestWord(input);
//    return 0;
//}

void LongestWord(const char* string) {
    size_t length = strlen(string);
    int i;

    char* longest = malloc(length * sizeof(char));
    char* parsed = malloc(length * sizeof(char));
    char currentChar;

    for (i = 0; i <= length; i++) {
        currentChar = string[i];
        if (isalpha(currentChar)) {
            append(parsed, currentChar);
        } else {
            if (strlen(parsed) > strlen(longest)) {
                memset(longest, 0, strlen(longest));
                strcpy(longest, parsed);
            }
            memset(parsed, 0, strlen(parsed));
        }
    }

    printf("longest: %s", longest);
    newline();
}
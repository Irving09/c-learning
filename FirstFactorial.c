/*
 Using the C language, have the function FirstFactorial(num)
 take the num parameter being passed and return the factorial
 of it (ie. if num = 4, return (4 * 3 * 2 * 1)).

 For the test cases, the range will be between 1 and 18.
*/

#include <printf.h>

#include "utils.h"

int FirstFactorial(int);

/*int main() {
    int res = FirstFactorial(0);

    barline();
    printf("%d", res);
    newline();
    barline();
}*/

int FirstFactorial(int num) {
    int result = 1;
    if (num == 0) {
        return result;
    }

    while (num > 0) {
        result = num * result;
        num--;
    }

    return result;
}


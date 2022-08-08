/* converts2i.c
 * source file for converts2i a program to convert a string representing an
 * integer to an actual integer
 *
 *
 *
 * Programmer: Mark Crapser
 *
 * Example program from Kochan, Stephen G., "Programming in C 3rd ed.,"
 * Sams Publishing. Page 229.
 *
 * 08/08/2022 Added strtoint(). Added code to input string.
*/

#include <stdio.h>

int strtoint(const char string[]);

int main(int argc, char *argv[]) {


    char inputstring[15];
    int index;

    for(index = 0; index <= 13; ++index)
        inputstring[index] = '\b';

    inputstring[14] = '\0';

    printf("Enter an integer: ");
    scanf("%14s", inputstring);

















    return(0);

}

int strtoint(const char string[]) {

    int i, intvalue, result = 0;

    for(i = 0; (string[i] >= '0') && (string[i] <= '9'); ++i) {
            intvalue = string[i] - '0';
            result = (result * 10) + intvalue;
    }

    return(result);
}

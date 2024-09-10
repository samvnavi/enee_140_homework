#include <stdio.h>
#include <ctype.h>
#define space 0
#define letter 1
int main() {
    char c;
    int check_char;
    while ((c = getchar()) != '\n') {
        if (c == ' '){
            check_char = space;
        }
        else if ((check_char == space) && (isalpha(c))){
            printf("\n");
            putchar(c);
            check_char = letter;
        }
        else if (isalpha(c)) {
            putchar(c);
        }
    };
    printf("\n");

}
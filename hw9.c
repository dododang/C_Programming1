#include <stdio.h>

void convertCase(char* str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        else if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main(void) {
    char input[50];
    printf("Input> ");
    fgets(input, sizeof(input), stdin);

    convertCase(input);

    printf("Output> %s", input);
    return 0;
}

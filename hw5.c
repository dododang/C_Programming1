#include <stdio.h>

void tobinary(int n) {
    if (n == 0) {
        return;
    }
    tobinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int number;
    printf("Please enter a number: ");
    scanf_s("%d", &number);

    if (number == 0) {
        printf("0");
    }
    else {
        tobinary(number);
    }

    printf("\n");
    return 0;
}

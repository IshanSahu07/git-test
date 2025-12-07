#include <stdio.h>

int main() {
    int rows = 5, cols = 5;

    for (int i = 0; i < rows; i++) {
        // print leading spaces
        for (int s = 0; s < rows - i - 1; s++) {
            printf(" ");
        }

        // print stars
        for (int j = 0; j < cols; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

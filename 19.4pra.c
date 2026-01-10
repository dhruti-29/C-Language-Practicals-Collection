#include <stdio.h>

int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");

    int i, s, c, n = 4;

    // Upper part
    for (i = 1; i <= n; i++) {
        for (s = 4; s > i; s--) {
            printf(" ");
        }
        for (c = 1; c <= i; c++) {
            printf("%c", c + 64);
        }
        for (c = i - 1; c >= 1; c--) {
            printf("%c", c + 64);
        }
        printf("\n");
    }

    // Lower part
    for (i = n - 1; i >= 1; i--) {
        for (s = 4; s > i; s--) {
            printf(" ");
        }
        for (c = 1; c <= i; c++) {
            printf("%c", c + 64);
        }
        for (c = i - 1; c >= 1; c--) {
            printf("%c", c + 64);
        }
        printf("\n");
    }

    return 0;
}
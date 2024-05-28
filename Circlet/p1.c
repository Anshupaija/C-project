#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 41; j < 41 + i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

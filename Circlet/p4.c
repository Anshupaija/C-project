#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            printf("   "); 
        }
        for (int j = 0; j < 5 - i; j++) {
            printf("1 0 ");
        }
        if (5 - i > 0) {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}

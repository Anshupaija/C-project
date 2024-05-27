#include <stdio.h>

int main() {
    int size = 5;
    int array[size][size];
    int sum = 0;

    printf("Enter array's elements:\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            if (i == 0 || i == size-1 || j == 0 || j == size-1) {
                sum += array[i][j];
            }
        }
    }

    printf("Boundary elements of the Array are:\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if (i == 0 || i == size-1 || j == 0 || j == size-1) {
                printf("%d\t", array[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("The sum of boundary elements of an Array: %d\n", sum);

    return 0;
}

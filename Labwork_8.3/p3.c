#include <stdio.h>

int main() {
    int size;
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int array[size][size];
    int sum = 0;

    printf("Enter array's elements:\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            if (i == j || i + j == size - 1) {
                sum += array[i][j];
            }
        }
    }

    printf("The sum of diagonal elements of an Array: %d\n", sum);

    return 0;
}

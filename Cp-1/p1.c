#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int array[rows][cols];
    int sum = 0;
    float average;

    printf("Enter array's elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }

    average = (float)sum / (rows * cols);
    printf("Average of an Array: %.2f\n", average);

    return 0;
}

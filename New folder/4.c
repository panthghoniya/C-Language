#include <stdio.h>

int main() {
    int rows, cols,rownum,rowsum = 0,colnum,colsum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int array[rows][cols]; 

    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Enter row number: ");
    scanf("%d", &rownum);
    printf("Elements of row %d: ", rownum);
    
    for (int j = 0; j < cols; j++) {
        printf("%d", array[rownum][j]);
        rowsum += array[rownum][j];
        if (j < cols - 1) {
            printf(", ");
        }
    }
    printf("\nThe sum of row %d: %d\n", rownum, rowsum);

    
    printf("Enter column number: ");
    scanf("%d", &colnum);
    
    printf("Elements of column %d: ", colnum);
    
    for (int i = 0; i < rows; i++) {
        printf("%d", array[i][colnum]);
        colsum += array[i][colnum];
        if (i < rows - 1) {
            printf(", ");
        }
    }
    printf("\nThe sum of column %d: %d\n", colnum, colsum);

}

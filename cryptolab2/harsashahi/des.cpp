#include <stdio.h>
int s_box[4][16] = {
    {14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7},
    {0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8},
    {4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0},
    {15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13}
};
void printDetails() {
    printf("Lab No.: 11\n") ;
    printf("Name: Harsa Shahi\n");
    printf("Roll No.: 101/078 (Section: 'C')\n");
    printf("---------------------\n");
    printf("Program to demonstrate how output of S-Box (S1) is generated in DES\n");
    printf("---------------------\n");
}
int main() {
	printDetails();
    int row, col;
    printf("Enter the value of row (0-3): ");
    scanf("%d", &row);
    printf("Enter the value of column (0-15): ");
    scanf("%d", &col);
    printf("The output of S-Box (S1) at position (%d, %d) is %d\n", row, col, s_box[row][col]);
    return 0;
}
#include <stdio.h>
int gcd(int a, int b){
    if (a == 0) {
        return b;
    } else {
        return gcd(b % a, a);
    }
}
int totient(int n){
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (gcd(i, n) == 1) {
            count++;
        }
    }
    return count;
}
void printDetails() {
    printf("Lab No.: 13\n") ;
    printf("Name: Harsa Shahi\n");
    printf("Roll No.: 101/078 (Section: 'C')\n");
    printf("---------------------\n");
    printf("Program to compute Totientvalue\n");
    printf("---------------------\n");
}
int main() {
	printDetails();
    int n, phi;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    phi = totient(n);
    printf("The totient value of %d is %d.\n", n, phi);
    return 0;
}
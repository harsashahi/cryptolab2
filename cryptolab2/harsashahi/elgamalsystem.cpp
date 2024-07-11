#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int modulo(int a, int b, int mod) {
    int res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
void printDetails() {
    printf("Lab No.: 18\n") ;
    printf("Name: Harsa Shahi\n");
    printf("Roll No.: 101/078 (Section: 'C')\n");
    printf("---------------------\n");
    printf("Program to implement Elgamal Cryptographic System.\n");
    printf("---------------------\n");
}
int main() {
	printDetails();
    int p, g, x, k, message;
    printf("Enter a prime number: ");
    scanf("%d", &p);
    printf("Enter a primitive root of %d: ", p);
    scanf("%d", &g);
    printf("Enter a private key: ");
    scanf("%d", &x);
    printf("Enter a value for k (1 < k < %d): ", p-1);
    scanf("%d", &k);
    int y = modulo(g, x, p);
    printf("Enter the message: ");
    scanf("%d", &message);
    int a = modulo(g, k, p);
    int b = (message * modulo(y, k, p)) % p;
    printf("Encrypted message: (%d, %d)\n", a, b);
    int decrypted = (b * modulo(a, p-1-x, p)) % p;
    printf("Decrypted message: %d\n", decrypted);
    return 0;
}
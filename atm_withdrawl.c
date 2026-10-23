#include <stdio.h>
#include <math.h>

int main() {
    int a ;
    printf("ENTER UR PIN☺️:\n");
    scanf("%d", &a);
    if ( a == 9987) {
        printf("PIN IS CORRECT ✅");
    }
    else {
        printf("PIN IS INCORRECT 😡");
    }
    if( a == 9987) {
        printf("WELCOME TO THE SYSTEM\n😘");
    }
    else {
        printf("ACCESS DENIED😂");
    }
    int b;
    int c = 6400;
    printf("enter the amount u wanted to withdraw: 💸\n");
    scanf("%d", &b);
    if (b <= 10000 && b > 0 && a == 9987 && b<c) {
        printf("TRANSACTION SUCCESSFUL🥳");
    }
    else {
        printf("INSUFFICIENT BALANCE😔\n exit");
    }   
    printf("the updated amount of the balance is: %d 🥲\n", c-b);
    printf("\nTHANK YOU FOR USING OUR SERVICE❤️");
    return 0;
}
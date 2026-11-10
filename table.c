#include <stdio.h>
#include <math.h>

/*int n;
printf("Enter Ur Number: ");
scanf("%d", &n);*/
int main() {
int n;
printf("Enter Ur Number: ");
scanf("%d", &n);
printf("The Table of %d Is Given Below :\n" , n);
    for (int i = 1; i <=10 ; i++) {
        printf("%d * %d = %d\n", n , i , n*i);
    }
return 0;
}
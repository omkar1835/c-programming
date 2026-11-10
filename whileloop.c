#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>5) {
        printf("%d\n" , n);
        n = n + 1;
    }
    return 0;

}

#include <stdio.h>
int factorial(int n);
int main() {
    int n;
    printf("enter ur number ");
    scanf("%d", &n);
    printf("factorial of %d is %d\n", n, factorial(n));
    return 0;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}
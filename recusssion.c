#include <stdio.h>
int sum_of_n(int n);
int main() {
    int n;
    printf("enter ur number ");
    scanf("%d", &n);
    printf("sum of first %d natural numbers is %d\n", n, sum_of_n(n));
    return 0;
}
int sum_of_n(int n){
    if(n==0){
        return 0;
    }
    return n + sum_of_n(n-1);
}
#include <stdio.h>
#include <math.h>
int main() {
    float P, R, T, CI, SI;
    printf("Enter The Principal Amount: ");
    scanf("%f", &P);
    printf("Enter The Rate Of Interest: ");
    scanf("%f", &R);
    printf("Enter The Tenure In Years: ");
    scanf("%f", &T);
    SI = (P * R * T) / 100;
    CI = P * (pow(1 + R / 100, T)) - P;
    printf("Simple Interest: %.2f\n", SI);
    printf("Compound Interest: %.2f\n", CI);
    return 0;
}
    
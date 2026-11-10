#include <stdio.h>
float per(float a, float b, float c);
int main() {
    float a,b,c,percentage;
    printf("enter ur maths marks : ");
    scanf("%f",&a);
    printf("enter ur science marks : ");
    scanf("%f",&b);
    printf("enter ur sanskrit marks : ");
    scanf("%f",&c);
    percentage = per(a,b,c);
    printf("the total percentage obtained is : %f", percentage);
}
float per(float a, float b, float c){
    float percentage =  (a + b + c)/3;
    return percentage;
}
   
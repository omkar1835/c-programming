#include <stdio.h>
float convertTEMP(float celsius);
int main() {
    float celsius;
    printf("enter ur temperature in celsius: ");    
    scanf("%f", &celsius);
   printf("the temperature in fahrenheit is : %f", convertTEMP(celsius));
   return 0;
}
float convertTEMP(float celsius){
    float f = (9.0/5.0)*celsius + 32;
    return f;
}
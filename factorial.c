#include <stdio.h>
#include <math.h>

int main() {
int n,i;
printf("Enter Ur Number: ");
scanf("%d", &n);
int fact = 1;
for (int i = 1 ; i <=n ; i++) 
{
 fact = fact * i;
}
printf("the factorial %d is : %d", n , fact);
return 0;
}

//this can only factroial of small numbers only !!!!!!

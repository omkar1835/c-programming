#include <stdio.h>

int main() {
int passcode;
printf("WELCOME\n");
printf("enter ur passcode: \n");
scanf("%d",&passcode);
if (passcode==9987){
    char app;
    char opp;

    printf("correct passcode\n");
    printf("choose an app to open (calculater,game) : \n");
    scanf(" %C", &app);

    if (app =='C || app =='c'') {
        printf("opening calculater\n");
        printf("enter ur operater (+,-,*,/): \n");
        scanf(" %C", &opp);
        switch(opp){
            
            case '+':
                printf("enter 2 numbers: \n");
                int a,b;
                scanf("%d %d",&a,&b);
                printf("the sum is: %d\n",a+b);
                break;
            case '-':
                printf("enter 2 numbers: \n");
                int c,d;
                scanf("%d %d",&c,&d);
                printf("the difference is: %d\n",c-d);
                break;
            case '*':
                printf("enter 2 numbers: \n");
                int e,f;
                scanf("%d %d",&e,&f);
                printf("the product is: %d\n",e*f);
                break;
            case '/':
                printf("enter 2 numbers: \n");
                int g,h;
                scanf("%d %d",&g,&h);
                if (h==0){
                    printf("division by zero error\n");
                    break;
                    case '%':
                    printf("enter 2 numbers: \n");
                    int i,j;
                    scanf("%d %d",&i,&j);
                    if (j==0){
                        printf("division by zero error\n");
                        break;
                }
                else{
                    printf("the quotient is: %d\n",g/h);
                    break;
                }
        }
            
    }
    
    else if (app =='G' || app =='g') {
        printf("opening game\n");
        
    }

}
else{
    printf("try again\n");
}
}
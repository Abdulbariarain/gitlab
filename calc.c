#include <stdio.h>
int main()
{
    char choice;
    int n1,n2;
    float ans;

    printf("Enter symbol: (+ for addition, - for subtraction, * for multiplication and / for division):\n");
    scanf("%c",&choice);

    if(choice == '+') {
        printf("Choose two number to add:\n ");
        scanf("%d %d",&n1,&n2);

        ans = n1 + n2;
        printf("%f",ans);
    }
    else if(choice == '-') {
        printf("enter two numbers to subtract: \n");
        scanf("%d %d",&n1,&n2);

        ans = n1 - n2;
        printf("%f",ans);
        
    }    
    else if(choice == '*') {
        printf("enter two numbers to multiply: \n");
        scanf("%d %d",&n1,&n2);

        ans = n1*n2;
        printf("%f",ans);
    }
    else if(choice == '/') {
        printf("enter two numbers to divide (first number will be the one being divided from the second number): \n");
        scanf("%d %d",&n1,&n2);

        ans = n1/n2;
        printf("%f",ans);
    }
    else
        printf("Wrong operator :(");
            
}
#include<stdio.h>
int main()
{
    int num1;
    int num2;

    printf("Enter First number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    
    if(num1<=num2)
    {
        printf("Second number is greater");
    }
    else{
        printf("First number is greater");
    }
}
#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return n + sum(n-1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of first %d numbers is: %d",n,sum(n));
    return 0;
}

//resursion five programs
//1. Factorial of a number
//2. Fibonacci series
//3. Power of a number
//4. GCD of two numbers
//5. Sum of first n numbers (this program)
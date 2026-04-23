#include<stdio.h>
int main()
{
    int a= 56;
    int b= 67;

    //Relational Operators
    printf("a==b is %d\n", a==b);
    printf("a!=b is %d\n", a!=b);
    printf("a>b is %d\n", a>b);
    printf("a<b is %d\n", a<b);
    printf("a>=b is %d\n", a>=b);
    printf("a<=b is %d\n", a<=b);

    //Logical Operators
    printf("(a==56) && (b==67) is %d\n", (a==56) && (b==67));
    printf("(a==56) || (b==67) is %d\n", (a==56) || (b==67));
    printf("!(a==56) is %d\n", !(a==56));

}
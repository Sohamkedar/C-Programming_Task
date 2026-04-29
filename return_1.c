#include <stdio.h>

int add()
{
    int a = 5;
    int b = 10;
    return a + b;   //5+10=15
}

int main()
{
    int result;
    result = add();
    printf("Sum = %d", result);
}
#include <stdio.h>

int b;    //globle variable
int add()
{
    int a = 50;                 //local variable
    static int c = 70;         //static variable
    a = a + 1; // 50+1=51
    b = b + 1;
    c = c + 1;
    printf("%d ",a);
    printf("%d ",b);
    printf("%d ",c);
}

int main(){
    add();
    add();
    add();
}
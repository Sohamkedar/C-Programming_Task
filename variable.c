#include<stdio.h>

int c=56;                    //global variable

int show(int m,int n){
    int a=34;               //local variable
    printf("%d",a);
    printf("%d",c);
}

int main(){
    printf("%d",c);
    show(5,6);
}
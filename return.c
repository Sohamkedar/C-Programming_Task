#include<stdio.h>

int display(){
    int ab=67;          //local variable
    int b=77;
    printf("%d",b);
    return ab;
}

int main(){
    printf("%d",display());
}

//why we use return PPT 
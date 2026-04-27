#include<stdio.h>
// int hello()
// {
//     printf("Hello Function");
// }

// int main()
// {
//     hello();
// }

// Type of function
// default function
// int add(){
//     int a = 10;
//     int b = 20;
//     int c = a + b;
//     printf("%d", c);
// }

// int main(){
//     add();   // function call
// }

// parameterized function
int sub(int a,int b){         //parameter
    int c=a-b;
    printf("%d",c);
}
int main(){
    sub(30,10);       //argument         
}

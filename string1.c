#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("Enter your name: ");
    gets(name);
    // scanf("%s", &name);
    
    printf("your name is: ");
    puts(name);
}
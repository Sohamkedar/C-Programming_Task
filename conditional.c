//If else
//it will check only one condition accordiing to the condition it will execute the block of code
// #include<stdio.h>
// int main()
// // {
// //     int num=57;
// //     if(num%2==0)
// //     {
// //         printf("The number is even");
// //     }
// //     else
// //     {
// //         printf("The number is odd");
// //     }
// // }

// //multiple conditions

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks ==60)
    {
        printf("Average Marks\n");
    }
    else if(marks == 70)
    {
        printf("good Marks\n");
    }
    else if(marks == 80)
    {
        printf("best Marks\n");
    }
    else
    {
        printf("Invalid Marks\n");
    }

}
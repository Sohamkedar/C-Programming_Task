#include<stdio.h>
int update(int *n){
    printf("\n Before updatation *n = %d",*n);  //10
    (*n)++;   //10+1=11
    printf("\n After updatation *n = %d",*n);   //11
}

int main(){
    int a=10;
    printf("\n Before calling function a = %d",a);  //10
    update(&a);  //10
    printf("\n After calling function a = %d",a);   //11
}
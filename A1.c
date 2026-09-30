/* 1. Write a program to accept an integer n and display all even numbers 
upto n. */

#include<stdio.h>

int main(){
    int n , i=1 ;
    printf("Enter the range n : ");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
        printf("%d ",i);}
        i = i + 1;
    }
    return 0;
}
//Write a program to Calculate sum of first N natural numbers 

#include <stdio.h>
int main() {
    int n,sum=0;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
         sum=sum+i;
    }
    printf("sum of first %d natural numbers : %d \n",n,sum);
    return 0;
}
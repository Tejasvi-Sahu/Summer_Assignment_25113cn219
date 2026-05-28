//WAP to count digits in a number.

#include <stdio.h>
int main(){
    int n,N,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    N=n;
    while(n>0){
        count++;
        n=n/10;
    }
    printf("Number of digits in %d is %d", N,count);
    return 0;
}
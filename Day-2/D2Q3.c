//WAP to find products of a digits.

#include <stdio.h>
int main(){
    int n, p=1,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        p=p*d;
        n=n/10;
    }
    printf("Product of digits is %d ",p);
    return 0;
}
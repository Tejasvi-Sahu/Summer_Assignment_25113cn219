//Write a program to print multiplication table of a given number.

#include <stdio.h>
int main() {
    int n, i=1;
    printf("Enter any Number: ");
    scanf("%d", &n);

    while(i<=10){
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
    return 0;
}
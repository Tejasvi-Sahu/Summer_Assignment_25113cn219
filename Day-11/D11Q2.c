// WAP to Write function to find maximum. 

#include <stdio.h>

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }    
}

int main(){
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1 ,&n2);

    printf("Maximum = %d \n", maximum(n1,n2));
    return 0;
}
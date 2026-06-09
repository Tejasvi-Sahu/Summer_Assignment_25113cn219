// WAP to Print prime numbers in a range.

#include <stdio.h>
int main(){
    int start,end,count,i;
    printf("Enter the starting value: ");
    scanf("%d",&start);

    printf("Enter the end value: ");
    scanf("%d",&end);

     printf("Prime numbers from %d to %d are: ",start,end);
    
    for(int i=start ; i<=end ; i++){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count=count+1;
            }
        }   
        if(count==2){
            printf("%d \n ", i);
        }  
    }   
    return 0;
}
/* WAP to Print number pyramid. 
    1 
   121 
  12321 
 1234321 
123454321                      */

#include <stdio.h>

int main(){
    int i,j,k;
    int rows = 5;

    for(i=1;i<=rows; i++){
        // print spaces 
        for(j=1; j<=rows-i; j++){
            printf(" ");
        }
          
        // print incresing numbers
        for(j=1; j<=i; j++){
            printf("%d",j);
        }

        // print decreasing numbers
        for(k=i-1; k>=1 ; k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
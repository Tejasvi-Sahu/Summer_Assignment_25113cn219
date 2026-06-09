/* WAP to Print character pyramid. 
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA                                     */

#include <stdio.h>

int main(){
    int i,j;
    int rows = 5;

    for(i=1;i<=rows; i++){

        // print spaces 
        for(j=1; j<=rows-i; j++){
            printf(" ");
        }
          
        // print incresing characters
        for(j=0; j<i; j++){
            printf("%c",'A'+j);
        }

        // print decreasing characters
        for(j=i-2; j>=0 ; j--){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}
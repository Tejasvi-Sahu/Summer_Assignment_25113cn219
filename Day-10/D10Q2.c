/* WAP to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   *** 
    *                                         */

    #include <stdio.h>

int main(){
    int i,j,k;
    int rows = 5;

    for(i=rows ; i>=1 ; i--){
        // print spaces 
        for(j=1; j<=rows-i; j++){
            printf(" ");
        }

        // print stars
        for(k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
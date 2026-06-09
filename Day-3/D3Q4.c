// WAP to Find LCM of two numbers. 

#include <stdio.h>
int main(){
    int a,b,lcm;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    lcm=(a>b)?a:b;

    for(lcm=1; lcm<=a*b; lcm++){
        if(lcm%a==0 && lcm%b==0){
            printf("The LCM is %d ", lcm);
        }
    }
    return 0;
}
#include <stdio.h>

int main(){

int a=0,b=0;
int sum_a=0,sum_b=0,counter=0;

scanf("%d %d",&a,&b);

 do{
    sum_a=(a*3);
    sum_b=(b*2);
    counter++;
    a=sum_a;
    b=sum_b;   
            } while(sum_a <= sum_b);
   
printf("%d",counter);
 
    return 0;

}

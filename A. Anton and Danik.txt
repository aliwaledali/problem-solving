#include <stdio.h>

int main(){
int n=0;
char c ;
int sum_a=0;
int sum_d=0;

scanf("%d",&n);

 for(int i=0;i<(2*n);i++){

     scanf("%c",&c);
     if (c=='A')sum_a++;
     if(c=='D')sum_d++;

 }
 if(sum_a > sum_d){
    printf("\n Anton");
 }
 else if(sum_a < sum_d){
    printf("\n Danik");
 }
 else if (sum_a == sum_d) printf("Friendship");

    return 0;
}

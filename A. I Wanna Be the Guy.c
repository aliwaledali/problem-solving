#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=0;
    int leve=0;
    int x=0;
    int y=1;
    int flag=1;
    int count=1;

    int out=0;
    int outt=0;

    scanf("%d",&leve);
    scanf("%d",&x);
    
    int arrx [x];
   for(i=0;i<x;i++){
        scanf("%d",&arrx[i]);
    }

       scanf("%d",&y);

    int arry [y];
     for(i=0;i<y;i++){
        scanf("%d",&arry[i]);
    }
if (( x==0 &&y==0)){
    printf("Oh, my keyboard!");}
else{
    count=x;
     int arru [count];

    for(i=0;i<x;i++){    
        arru[i]=arrx[i];
    }

    for(i=0;i<y;i++){
        flag=1;
  
        for(j=0;flag==1 && j<x;j++){
            if(arrx[j]==arry[i]){
            flag=0;
            }
        }
        if(flag==1){
            arru[count]=arry[i];
            count++;
        }
    }

    for(i=0;i<leve;i++){
        out=arru[i]-(i+1);
        outt+=out;
    }

    if(outt==0){
         printf("I become the guy.");
    }
    else printf("Oh, my keyboard!");
}
    return 0;
}

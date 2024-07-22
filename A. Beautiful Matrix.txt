#include <stdio.h>
#include <stdlib.h>
int main (){

    int matx[5][5];
    int i,j;
    int r=0,c=0;
    int res=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&matx[i][j]);
            if(matx[i][j]==1){
                r=i;
                c=j;
            }
        }

    }
   res=abs(r-2)+abs(c-2);
   printf("%d",res);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int i=0;
    int n=1;
    char tem_two;
    int tmo=0;
    int tmt=0;



    scanf("%d",&n);

    char arr[n] [11];

    for(i=0;i<n;i++){
      
        scanf("%s",&arr[i]);
        int result = strcmp(arr[0],arr[i]);
         if(result==0){
            tmo++;
         }
         if(result!=0){
            tem_two=i;
            tmt++;
         }
      
    }


    if(tmo>tmt){
        printf("%s",arr[0]);
    }
    else{
        printf("%s",arr[tem_two]);
    }


    return 0;
}


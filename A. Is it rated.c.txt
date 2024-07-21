#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0;
    int n=0;
    int count=0;
    int countt=0;
    int cou=0;
    int c=0;

    scanf("%d",&n);
    int arr[n][2];

   for(i=0;i<n;i++){
        scanf("%d",&arr[i][0]);
        scanf("%d",&arr[i][1]);
    }


    for(i=0;i<n;i++){ 

        if(i<=(n-1)){
             if((arr[i][1]- arr[i+1][1])>=0){
                 count++;
        }
      }
        if(arr[i][0]==arr[i][1]) countt++;
        if(arr[i][0]<arr[i][1]) cou++;
    }
    

    if(cou>0){
     printf("rated");
     c++;
     }
    if(countt==n && count !=(n-1)){
         printf("unrated");
         c++;
    }
    if(countt==n && count==(n-1)){
         printf("maybe");
         c++;
    }
    if(c==0) printf("rated");



    return 0;
}

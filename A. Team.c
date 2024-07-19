#include <stdio.h>

int main(){

    int n;
    int sum=0 ,c=0;
    int p=0,v=0,t=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d %d",&p,&v,&t);
              sum=p+v+t;
            if(sum>=2) c++;

    }
    printf("%d",c);
    return 0;

}

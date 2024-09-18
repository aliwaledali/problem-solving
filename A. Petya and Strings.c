#include <stdio.h>
#include<string.h>
int main (){

char text_1 [100];
char text_2 [100];
gets(text_1);
gets(text_2);

int i=strcasecmp(text_1,text_2);
printf("%d",i);


    return 0;
}


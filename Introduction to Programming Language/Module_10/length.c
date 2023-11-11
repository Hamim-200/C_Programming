#include<stdio.h>
#include<string.h>
int main(){

    char a[100];
    scanf("%s",a);
  
    //For Loop
    // int count =0;
    // for(int i =0;a[i]!='\0';i++){
    //     count++;
    // }

    //While Loop
    // int count = 0;
    // int i =0;
    // while(a[i] != '\0'){
    //     count++;
    //     i++;
    // }

    int st = strlen(a);
    printf("%d\n",st);


    //printf("%d\n",count);
    return 0;
}
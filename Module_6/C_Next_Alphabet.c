//Given a lowercase alphabet character. You have to print the next character in the alphabet.

#include<stdio.h>
int main(){

    char a,z;
    scanf("%c",&a);

    if(a==122){
        printf("%c",97);
    }

    else if(a>=97 && a<=121){
        printf("%c",a+1);
    }
  
    
    return 0;
}


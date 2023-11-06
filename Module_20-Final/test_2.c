#include<stdio.h>
int main(){

    int n,s,k;
    printf("Enter Line Number: ");
    scanf("%d",&n);
    int l=((n-1)/2)+11;
    s=n-1;
    k=1;
    for (int i =1 ; i<=l;i++){
        for (int j = 1; j <=s; j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        //line sesh
        s--;
        k=k+2;
        printf("\n");
    }
    return 0;
}

//        *
//       ***
//      *****
//     *******
//    *********
//   ***********
//  *************
// ***************
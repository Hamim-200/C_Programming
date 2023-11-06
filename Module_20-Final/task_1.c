#include<stdio.h>
int main(){

    int tst;
    scanf("%d",&tst);
    while(tst--){
        int N;
        scanf("%d",&N);

        char round[100001];
        scanf("%s",round);

        int tiger=0,pathaan = 0;
        for (int i = 0; i < N; i++) {
            if (round[i] == 'T') {
                tiger++;
            } else if (round[i] == 'P') {
                pathaan++;
            }
        }

        if(tiger>pathaan){
            printf("Tiger\n");
        }
        else if(pathaan>tiger){
            printf("Pathaan\n");
        }
        else{
            printf("Draw\n");
        }
    }
    return 0;
}
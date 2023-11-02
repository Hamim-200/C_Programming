#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);

    while (T--) {
        char S[10001];
        scanf("%s", S);

        int capitalLetter = 0, smallLetter = 0, number = 0;
        int i = 0;
        while (S[i] != '\0') {
            if ((S[i]) >= 65 && (S[i]) <= 90 ) {
                capitalLetter++;
            } 
            else if ((S[i])>=97 && (S[i]<=122)) {
                smallLetter++;
            } 
            else  {
                number++;
            }
            i++;
        }

        printf("%d %d %d\n", capitalLetter, smallLetter, number);
    }

    
    return 0;
}

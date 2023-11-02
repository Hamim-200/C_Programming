#include<stdio.h>

void world(){
    printf("World\n");

}
void hello(){
    printf("Hello\n");
    world();
}
int main(){

    hello();
    printf("End Program.\n");
    return 0;
}
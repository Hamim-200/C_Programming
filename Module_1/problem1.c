#include <stdio.h>

int main() {
    // Print "Hello, World!" on one line
    printf("Hello, World!\n");
    
    // Declare a string variable to store input
    char s[1000];
    
    // Read input string
    fgets(s, sizeof(s), stdin);
    
    // Print the input string on the next line
    printf("%s", s);
    
    return 0;
}

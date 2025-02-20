#include <stdio.h>

int main() {
    // Declare variables to store user input
    int age;
    char name[50];
    
    // Get user input
    printf("What is your name? ");
    scanf("%s", name);
    
    printf("How old are you? ");
    scanf("%d", &age);
    
    // Calculate years until 100
    int yearsTo100 = 100 - age;
    
    // Print personalized message
    printf("\nHello %s!\n", name);
    printf("You will be 100 in %d years.\n", yearsTo100);
    
    return 0;
}

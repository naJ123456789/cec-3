#include <stdio.h>
int main() {   
    int number;
   
    printf("Enter an integer  to print: ");  
    
    // reads and stores input
    scanf("%d", &number);

    // displays output
    printf("You entered: %d", number);
    
    return number;
}

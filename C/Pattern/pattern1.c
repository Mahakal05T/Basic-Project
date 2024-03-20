#include <stdio.h> 
  
int main() 
{ 
    int rows; 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
  
    // first loop for printing rows 
    for (int i = 0; i < rows; i++) { 
  
        // second loop for printing character in each rows 
        for (int j = 0; j <= i; j++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
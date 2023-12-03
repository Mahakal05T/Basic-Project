#include <stdio.h> 
  
int main() 
{ 
    int rows ; 
    int n = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
  
    // outer loop to print all rows 
    for (int i = 0; i < rows; i++) { 
  
        // innter loop to print abphabet in each row 
        for (int j = 0; j <= i; j++) { 
            printf("%d ", n++); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
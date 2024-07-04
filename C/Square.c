#include <stdio.h>

int main () {
    int n , square;
    
    printf("Enter a Number ");
    scanf("%d",&n);

    square = n * n;
    printf("%d square of %d ",square,n);
}
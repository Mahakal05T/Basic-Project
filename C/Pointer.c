#include<stdio.h>

int main(){
    int myage = 18;
    printf("address of myage: %p\n",&myage);

    int* ptr = &myage;
    printf("value of myage: %d\n", myage);
}
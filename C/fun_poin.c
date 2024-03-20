#include <stdio.h>
void poin(int* ptr){
    printf("print address inside the function: %p\n",ptr);
}

int main(){
    int i = 45;

    printf("address of i: %p\n",&i);

    poin(&i);
}
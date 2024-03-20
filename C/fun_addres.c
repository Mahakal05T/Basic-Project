#include <stdio.h>
void TenTimes(int *value){
    *value *= 10;
}

int main(){
    int a = 60;
    printf("original value: %d\n",a);

    TenTimes(&a);
    printf("value after multiplication: %d\n",a);
}
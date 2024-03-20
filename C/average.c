#include <stdio.h>

void avg_n(){
    int n1,n2,n3,avg;
    printf("enter three number: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    avg = (n1 + n2 + n3) / 3;
    printf("average of three number: %d",avg);
}

int main(){
    avg_n();
}
#include <stdio.h>

// swaps the values of variables a and b
void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    a = 10;
    b = 12;
    printf("oh ! variables have values \na:%i \nb:%i\n", a, b);
    swap(&a,&b);
    printf("oh ! variables now have values \na:%i \nb:%i\n", a, b);
    return 0;
}

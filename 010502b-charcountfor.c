#include <stdio.h>

int main(){
    printf("hello");
    int count;
    for (count= 0; getchar() != EOF; count++){ }
    printf("%i \n", count);
    return 0;
}

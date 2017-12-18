#include <stdio.h>

// note, to get EOF you need to do Ctrl-D twice
int main(){
    long count;
    char line[2];
    count = 0;
    while (getchar() != EOF ){
        count++; 
    }
    printf("%ld\n", count);
}

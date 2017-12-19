#include <stdio.h>

// note, to get EOF you need to do Ctrl-D twice
int main(){
    int count;
    count = 0;
    while (getchar() != EOF ){
        count++; 
    }
    printf("%i\n", count);
}

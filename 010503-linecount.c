#include <stdio.h>

int main(){
    int c, count;
    count = 1;
    while ((c = getchar())!= EOF){
        if (c == '\n'){
            ++count; 
        }
    }

    printf("hey, you typed %i lines \n", count);
    return 0;
}

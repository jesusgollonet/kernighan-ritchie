#include <stdio.h>

#define NOWORD 0
#define WORD 1

int isBoundary(int ch);

int main(){
    char lines[100];
    int c;
    int count = 0;
    int state = NOWORD;
    while ((c = getchar())!= EOF){
        if (isBoundary(c) && state == WORD){
            state = NOWORD; 
            lines[count++] = '\n';
        } else if (!isBoundary(c)){
            state = WORD; 
            lines[count++] = c;
        }
    }
    printf("hey, these are the words\n");
    for (int i = 0; i < count; i++){
        putchar(lines[i]) ;
    }
}

int isBoundary(int ch){
    return ch  == ' ' || ch == '\t' || ch == '\n';
}

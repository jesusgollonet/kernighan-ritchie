#include <stdio.h>

#define NOWORD 0
#define WORD 1

int main(){
    int wordCount = 0;
    int c;
    int state = NOWORD;
    
    while((c = getchar()) != EOF){

        if (c == ' ' || c == '\t' || c == '\n') {
            state = NOWORD;
        } else {
            if (state == NOWORD){
                ++wordCount; 
            }
            state = WORD; 
        }

    }

    printf("\nhey, that sentence has %i words\n", wordCount);
}

#include <stdio.h>

#define NOWORD 0
#define WORD 1

int main(){
    int wordCount, charCount,  lineCount;
    wordCount = charCount = lineCount = 0;
    int c;
    int state = NOWORD;
    
    while((c = getchar()) != EOF){
        if (charCount == 0 || c == '\n'){
            ++lineCount;
        }
        ++charCount;

        if (c == ' ' || c == '\t' || c == '\n') {
            state = NOWORD;
        } else if (state == NOWORD){
            ++wordCount; 
            state = WORD; 
        }

    }

    printf("\nhey, that sentence has \n%i characters \n%i words\n%i lines", charCount, wordCount,  lineCount);
}

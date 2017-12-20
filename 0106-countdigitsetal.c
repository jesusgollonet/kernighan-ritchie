#include <stdio.h>

/* count number of digits, whitespace characters and all other characters*/
int isDigit(c){
    return c >= '0' && c <= '9';
}

int isWhitespace(c){
    return c  == ' ' || c == '\t' || c == '\n';
}

int isPlainChar(c){
    return !(isWhitespace(c) || isDigit(c));
}

int main(){
    int c;
    int digitCount, whitespaceCount, plainCharCount;
    digitCount = whitespaceCount = plainCharCount = 0;

    while((c = getchar())!= EOF){
        if(isDigit(c)) {
            ++digitCount;
        } else if (isWhitespace(c)){
            ++whitespaceCount; 
        } else {
            ++plainCharCount; 
        }
    }
    printf("hey, that sentence has %i digits, %i whitespace chars, and %i normal chars", digitCount, whitespaceCount, plainCharCount);
}

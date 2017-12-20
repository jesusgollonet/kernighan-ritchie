#include <stdio.h>

/* count number of digits, whitespace characters and all other characters*/
int isDigit(c){
    return c >= '0' && c <= '9';
}

int isWhitespace(c){
    return c  == ' ' || c == '\t' || c == '\n';
}

int main(){
    int c;
    int digitCount, whitespaceCount, plainCharCount;
    int digits[10];

    digitCount = whitespaceCount = plainCharCount = 0;

    for (int i = 0; i < 10; i++){
        digits[i] = 0;
    }

    while((c = getchar())!= EOF){
        if(isDigit(c)) {
            ++digits[ c - '0'] ;
        } else if (isWhitespace(c)){
            ++whitespaceCount; 
        } else {
            ++plainCharCount; 
        }
    }

    printf("hey, that sentence has:\n");

    for (int i = 0; i < 10; i++){
        printf("digit %i: %i\n", i, digits[i]);
    }
    printf("%i whitespace chars, and\n%i normal chars", whitespaceCount, plainCharCount);
}

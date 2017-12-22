#include <stdio.h>

#define NOWORD 0
#define WORD 1

int isBoundary(int ch){
    return ch  == ' ' || ch == '\t' || ch == '\n';
}

int max(int a, int b){
    return a > b ? a : b;
}

int getMaxValue(int arr[], int arrLength){
    int maxValue = 0;
    for (int i = 0; i < arrLength; i ++){
        if (arr[i] > maxValue){}
        maxValue = max(arr[i] , maxValue);
    }
    return maxValue;
}

int main(){
    
    int c, currentWordLength;
    int wordLengths[20];
    currentWordLength = 0;
    int state = NOWORD;

    for(int i = 0; i < 20; i++){
        wordLengths[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if(isBoundary(c) && state == WORD && currentWordLength > 0){
            ++wordLengths[currentWordLength-1];
            currentWordLength = 0;
            state = NOWORD;
        } else if (!isBoundary(c)){
            ++currentWordLength; 
            state = WORD;
        }
    }

    if (currentWordLength > 0){
        ++wordLengths[currentWordLength - 1];
    }

    int maxFreq = getMaxValue(wordLengths, 20);
    int padValue = max(maxFreq + 2, 11);

    printf("\n max freq %i \n", maxFreq);
    printf("\n| n letters | frequency ");

    for (int i=11; i < padValue; i++){
        printf(" ");
    }

    printf("|\n");

    for (int i=0; i < 20; i++){
        printf("| %02i        | ", i + 1); 
        for ( int j = 0; j < padValue - 2; j++){
            if (j < wordLengths[i])
                printf("*");
            else 
                printf(" ");
        }
        printf(" |\n"); 
    }
}


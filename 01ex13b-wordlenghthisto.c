#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXWORDLENGTH 20
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

void histo(int length, char labels[][length], int freqs[length]){
    int maxFreq = getMaxValue(freqs, length);
    printf("\n");
    for (int i = 0; i < maxFreq; i++){
        for (int j = 0; j < length; j++){
            if (maxFreq - i -1 < freqs[j]) {
                printf("  *");
            } else {
                printf("   ");
            }

        }
        printf("\n");
    }
    
    for (int i = 0; i < length; i++ ){
        printf("%3s", labels[i]);
    }
    
}

int main(){

    
    int c, currentWordLength;
    int wordLengths[MAXWORDLENGTH];
    currentWordLength = 0;
    int state = NOWORD;

    for(int i = 0; i < MAXWORDLENGTH; i++){
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

    char labels[][MAXWORDLENGTH] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20"};

    /*for (int i = 0; i < MAXWORDLENGTH; i++ ){*/
        /*printf("= %s %i \n", labels[i], wordLengths[i]);*/
    /*}*/

    histo (MAXWORDLENGTH, labels, wordLengths);
    

    /*int maxFreq = getMaxValue(wordLengths, 20);*/
    /*int padValue = max(maxFreq + 2, 11);*/

    /*printf("\n max freq %i \n", maxFreq);*/
    /*printf("\n| n letters | frequency ");*/

    /*for (int i=11; i < padValue; i++){*/
        /*printf(" ");*/
    /*}*/

    /*printf("|\n");*/

    /*for (int i=0; i < 20; i++){*/
        /*printf("| %02i        | ", i + 1); */
        /*for ( int j = 0; j < padValue - 2; j++){*/
            /*if (j < wordLengths[i])*/
                /*printf("*");*/
            /*else */
                /*printf(" ");*/
        /*}*/
        /*printf(" |\n"); */
    /*}*/
}


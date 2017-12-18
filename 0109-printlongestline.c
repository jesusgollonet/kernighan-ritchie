//reads a set of text lines and prints the longest
//
//where does it get the line?
#include <stdio.h>

int main (){
    int ch;
    char currentLine[200];
    int currentMaxLineLength = 0;
    int currentCount = 0;
    while ((ch = getchar()) != EOF){
        while (ch != '\n'){
            printf("%i", currentCount);
            /*currentLine[currentCount++] = ch;*/
        }
        /*printf("current line %s", currentLine);*/
    }
    return 0;
}



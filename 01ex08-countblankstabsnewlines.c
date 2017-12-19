#include <stdio.h>

#define CHARS 3

struct counteeChar{
    int ch;
    char * name;
    int count;

};

struct counteeChar makeCounteeChar(int ch, char * name){
    struct counteeChar charMade;
    charMade.ch = ch;
    charMade.name = name;
    charMade.count  = 0;
    return charMade;
}

int main(){
    struct counteeChar ccs[CHARS];
    ccs[0] = makeCounteeChar(' ', "blanks");
    ccs[1] = makeCounteeChar('\t', "tabs");
    ccs[2] = makeCounteeChar('\n', "newlines");

    int currentChar;
    int blanks = 0;

    while((currentChar = getchar())!= EOF ){
        for (int i = 0; i < CHARS; i++){
            if (currentChar == ccs[i].ch) {
                ++ccs[i].count;
            }
            printf("%c %i %s\n", ccs[i].ch, ccs[i].count, ccs[i].name);

        }
    }

    printf("\nhey that sentence has %i %s, %i, %s and %i, %s\n ", ccs[0].count, ccs[0].name, ccs[1].count, ccs[1].name, ccs[2].count, ccs[2].name);
}

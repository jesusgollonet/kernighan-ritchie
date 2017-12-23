#include <stdio.h>
#include <stdlib.h>


#define MAXCHARS 127
#define CONTROLCHARS 33

char * controlChars [CONTROLCHARS] ={
    "NUL",
    "SOH",    
    "STX",
    "ETX",
    "EOT",
    "ENQ",
    "ACK",
    "BEL",
    "BS",
    "TAB",
    "LF",
    "VT",
    "FF",
    "CR",
    "SO",
    "SI",
    "DLE",
    "DC1",
    "DC2",
    "DC3",
    "DC4",
    "NAK",
    "SYN",
    "ETB",
    "CAN",
    "EM",
    "SUB",
    "ESC",
    "FS",
    "GS",
    "RS",
    "US",
    "SPC"
};


char * charstring( char c){
    char * str = malloc(sizeof(char) * 4);
    if(c < CONTROLCHARS){
        str = controlChars[c];
    } else {
            str[0] = c;
            str[1] = '\0';
    }

    return str;
}

int main (){
    // we'll use char position to determine which char it is
    int c;
    int freqs[MAXCHARS]={0};
    printf("main\n");

    while ((c = getchar()) != EOF){
        printf("%i, %c \n", c, c);
        ++freqs[c];
    }

    for (int i = 0; i < MAXCHARS; i++){
        if (i % 5 == 0){
            printf("\n\n");
        }
        printf("| %03i = % 3i = %3s ", i, freqs[i], charstring(i));
    }
}


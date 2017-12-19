#include <stdio.h>

int main(){
    char line[100];
    int count=0;
    int c;
    int isInBlank =0;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            isInBlank++;
        } else if( c!=' '){
            isInBlank = 0;
        }

        if (isInBlank<=1){
            line[count]=c;
            count++;
        }

    }
    printf("\n%s", line);
}

#include <stdio.h>

int main(){
    int c, count;
    char line[100];
    count = 0;

    while((c = getchar()) != EOF){
        if(c == ' '){
            line[count++] = '\\';
            line[count++] = '\\';
        }else if (c == '\t'){
            line[count++] = '\\';
            line[count++] = 't';
        }else if (c == '\n'){
            line[count++] = '\\';
            line[count++] = 'n';
        } else {
            line[count++] = c;
        }
    }

    printf("\n\n");
    for (int i = 0; i < count; i++){
        putchar(line[i]);
    }
}

#include <stdio.h>
#include <math.h>

// print temperature equivalents of fahrenheit to celsius from 0 to 200 in increments of 10
//
// formula: “C=(5/9)(oF-32)”

int main(){
    int i = 0;
    int max = 200;
    int interval = 10;
    
    for(int i = 0; i <= 300; i+=20){
        int fahr = i == 0 ? 1 : i;
        int cel = ((5) * ( fahr - 32)) / 9;
        printf("fahr %i  => %i celsius \n", fahr, cel);
    }
}

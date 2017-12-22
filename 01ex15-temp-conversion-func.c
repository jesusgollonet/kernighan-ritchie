#include <stdio.h> 
#include <math.h>

// print temperature equivalents of fahrenheit to celsius from 0 to 200 in
// increments of 10
//
// formula: “C=(5/9)(oF-32)”

int fahrtocel(int fahr);

int main(){
    int i = 0;
    int max = 200;
    int interval = 10;

    for(int i = 0; i <= 300; i+=20){
        int fahr = i == 0 ? 1 : i;
        int cel = fahrtocel(fahr);
        printf("fahr %i  => %i celsius \n", fahr, cel);
    }
}

int fahrtocel(int fahr){
    return ((5) * ( fahr - 32)) / 9;
}

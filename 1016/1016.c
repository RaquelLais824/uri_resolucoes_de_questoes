#include <stdio.h>

int main(){

    int mult, v;

    while (scanf("%i", &v) != EOF){
        
        mult = v*2;
        printf("%i minutos\n", mult);
    }
    return 0;
}
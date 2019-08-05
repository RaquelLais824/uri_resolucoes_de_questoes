#include <stdio.h>
#include <math.h>

int main(){

    double distancia, x1, y1, x2, y2, x, y;
    double QuadX, Quady, soma, raiz;
    //scanf("%lf %lf %lf %lf", &x1, &y1,&x2, &y2);

    while (scanf("%lf %lf %lf %lf", &x1, &y1,&x2, &y2) != EOF){
    
        x = x2- x1;
        y = y2 - y1;

        QuadX = pow(x,2);
        Quady = pow(y,2);

        soma = QuadX + Quady;

        raiz = sqrt(soma);

        printf("%.4lf\n",raiz);
        
    }

    return 0;

}
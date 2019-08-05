#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main()
{

    double a, b, c, perimetro, area;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {

        if ((abs(b - c) < a) && (a < (b + c)))
        {

            perimetro = a + b + c;

            printf("Perimetro = %.1lf\n", perimetro);
        }
        else
        {
            area = ((a + b) * c) / 2;
            printf("Area = %.1lf\n", area);
        }
    }

    return 0;
}
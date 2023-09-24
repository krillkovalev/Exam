#include <stdio.h>
#include <math.h>
#define M_PI

int main() {
    double r;
    int P = 21500;
    if (scanf("%lf", &r) != 1)
    {
        printf("n/a");
    } else {
        double V = (4 / 3) * M_PI * pow(r, 3);
        double result = P * V;
        printf("%0.lf", result);
    }

}
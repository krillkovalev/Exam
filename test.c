#include <stdio.h>
#include <math.h>

double factorial(double count);

int main() {
    double x, cnt = 1;
    scanf("%lf", &x);
    // printf("%.6lf", exp(x));
    double res = 1 + (x / factorial(1)) + (x / factorial(2)) + (x / factorial(3)) + (x / factorial(4)) + (x / factorial(5)) + (x / factorial(6));
    printf("%.6lf", res);

    
    
    
    return 0;
}

double factorial(double count){
    int vlfct = 1;
    for (int i=1;i<=count;i++)
    {
        vlfct=vlfct*i;
    }
    return vlfct;

}
#include <stdio.h>
#include <math.h>

int main() {

    double x;
    if(scanf("%lf", &x) == 1)
    {
        double res = x * 57.29;
        printf("%lf", ceil(res));
    }
    else {
        printf("n/a");
        return 0;
    }
    return 0;

}

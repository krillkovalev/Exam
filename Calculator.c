#include <stdio.h>

int main() {

    int m, n, res;
    printf("Write the first number: ");
    scanf("%d", &m);
    printf("Write the second number: ");
    scanf("%d", &n);
    printf("Write the action: ");
    if (getchar() == '*')
    {
        res = m * n;
    }
    if (getchar() == '/')
    {
        res = m / n;
    }
    if (getchar() == '+')
    {
        res = m + n;
    }
    if (getchar() == '-')
    {
        res = m - n;
    }
    printf("Result: %d", res);



}
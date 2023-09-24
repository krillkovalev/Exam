#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int i = 0, n;
    while (arr[i] != -1)
    {
        scanf("%d", &n);
        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        arr[i] = n;
        printf("%d ", arr[i]);
        i++;
    }
}
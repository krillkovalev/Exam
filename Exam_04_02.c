#include <stdio.h>
#include <stdlib.h>


int main() {
    int *arr = NULL;
    int i = 0, n, m = 0;
        while (n != -1)
        {   
            if(scanf("%d", &n) != 1)
            {
                printf("n/a");
                return 0;
            }
            if (n == -1) break;
            arr = (int*)realloc(arr, (i + 1) * sizeof(int));
            arr[i] = n;
            if (m < arr[i]) m = arr[i];
            i++;
        }
    printf("%d", m);
    free(arr);
    return 0;
}
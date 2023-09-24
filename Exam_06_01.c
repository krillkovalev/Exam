#include <stdio.h>
#include <stdlib.h>



int main() {

    int h, w;
    scanf("%d", &h);
    int A[h][h];
    int value;
    for (int i = 0; i < h; i++){
        for (int j = 0; j < h; j++)
            {
                scanf("%d", &A[i][j]);
                
            }
    }
        for (int i = 0; i < h; i++){
        for (int j = 0; j < h; j++)
            {
                printf("%d ", A[i][j]);
            }
        printf("\n");
    }
}


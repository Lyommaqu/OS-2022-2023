                                         
// A. Богатырёв, 1992-96, Си в UNIX.
// Задача 1.9


#include <stdio.h>

int main(int argc, char* argv[]) {
        int k;
        scanf("%d", &k);
        for (int i = 1; i <= k; i++) {
                for (int j = 1; j <= i; j++) {
                printf("*");
                }
        printf("\n");
        }
        return 0;
}
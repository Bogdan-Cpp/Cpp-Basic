#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));

    *ptr = 8; 
    printf("%d se sterge din memorie!\n", *ptr); 

    free(ptr);
    getchar();
    return 0;
}

#include <stdio.h>

int suma(int a, int b);

int main(){
    int a;
    int b;
    int total = suma(a, b);
    printf("Total %d\n", total);
    
    getchar();
    getchar();
    return 0;
}

int suma(int a, int b){
    scanf("%d", &a);
    scanf("%d", &b);

    return a + b;
}
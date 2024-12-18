#include <stdio.h>
#include <math.h>

bool isHappy(int n);

int main(){
    bool var = isHappy(20);
    printf("%d\n", var);

    getchar();
    return 0;
}

bool isHappy(int n) {
    int result = n;
    int tempint = 0;

    do {
        if (tempint == result) return false;
        tempint = result;
        result = 0;
        while (tempint > 0) {
            result += pow(tempint % 10, 2);
            tempint = tempint / 10;
        }
    } while (result != 1);
    return true;
}
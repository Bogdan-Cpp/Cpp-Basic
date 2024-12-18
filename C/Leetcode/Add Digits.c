#include <stdio.h>

int addDigits(int num);

int main(){
    int var = addDigits(10);
    printf("%d\n", var);
    
    getchar();
    return 0;
}

int addDigits(int num) {
    while(num >= 10){
        int tot = 0;
       while(num != 0){
          tot += num % 10;
          num /= 10;
       }
       num = tot;
    }
    return num;
}
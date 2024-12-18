#include <stdio.h>

bool isHappy(int n);

int main(){
    bool var = isHappy(19);
    printf("%d\n", var);

    getchar();
    return 0;
}

bool isHappy(int n){
    int org_n = n;
    if(n == 1){return true;}
    
    while(n != 1){
        int tot = 0;
        while(n > 0){
            tot += (n % 10) * (n % 10);
            n /= 10;
        }
        n = tot;
        if(n == org_n){return false;}
    }
    return true;  
}
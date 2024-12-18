#include <stdio.h>
#include <math.h>

double myPow(double x, int n);

int main(){
    double rez = myPow(1, -2147483648);
    printf("%lf\n", rez);

    getchar();
    return 0;
}

double myPow(double x, int n) {
    double tot = 0;
    double var_n;
    var_n = (double)n;

    if(n < 0){
       tot = 1 / pow(x, (var_n * -1));
    }
    else{
        tot = pow(x, var_n);
    }
    return tot;
}
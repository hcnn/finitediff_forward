#include <stdio.h>  // printf
#include "finitediff_forward.h"

// mean squared error, x=xi - xmean
double myfunc(double *x, int n){
    double f = 0.0;
    for(int i=0; i<n; i++){
        f += x[i] * x[i];
    }
    f /= (double)n;
    return f;
}

int main(){
    double (*evalfunc)(double*, int) = &myfunc;
    double x[]={-.6, -.5, -.4, -.3, -.2, -.1, 0.0, .1 , .2, .3, .4, .5, .6};
    int n = 13;
    double g[n];
    double h = 0.001;
    
    finitediff_forward(evalfunc, x, n, h, g);
    
    for(int i=0; i<n; i++){
        printf("x: %7.4f | g(x): %7.4f \n", x[i], g[i] );
    }
    
    return 0;
}

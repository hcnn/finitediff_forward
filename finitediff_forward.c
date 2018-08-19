#include "finitediff_forward.h"

void finitediff_forward(double (*f)(double*, int), 
                        double *x, 
                        int n, 
                        double h, 
                        double *g){
    double tmp;
    double f0 = f(x,n);
    for (int i=0; i<n; i++){
        tmp = x[i]; //store temporarly
        x[i] += h;  //add bandwidth param
        g[i] = (f(x,n) - f0) / h;
        x[i] = tmp; //reassign orginal value
    }
} 

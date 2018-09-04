#include "finitediff_forward.h"

void finitediff_forward(TARGET_FUNC_PTR f, 
                        double *x, 
                        size_t n, 
                        double h, 
                        double *g){
    double tmp;
    double f0 = f(x,n,NULL);
    for (size_t i=0; i<n; i++){
        tmp = x[i]; //store temporarly
        x[i] += h;  //add bandwidth param
        g[i] = (f(x,n,NULL) - f0) / h;
        x[i] = tmp; //reassign orginal value
    }
} 

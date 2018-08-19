#ifndef FINITEDIFF_FORWARD_H
#define FINITEDIFF_FORWARD_H

void finitediff_forward(double (*)(double*, int), 
                        double *, 
                        int , 
                        double , 
                        double *);

#endif /* FINITEDIFF_FORWARD_H */

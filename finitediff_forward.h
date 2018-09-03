#ifndef FINITEDIFF_FORWARD_H
#define FINITEDIFF_FORWARD_H

#include <stddef.h>

void finitediff_forward(double (*)(const double*, size_t), 
                        double *, 
                        size_t , 
                        double , 
                        double *);

#endif /* FINITEDIFF_FORWARD_H */

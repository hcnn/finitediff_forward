#ifndef FINITEDIFF_FORWARD_H
#define FINITEDIFF_FORWARD_H

#include "target_func_ptr/target_func_ptr.h"
#include <stddef.h>

void finitediff_forward(TARGET_FUNC_PTR, 
                        double *, 
                        size_t , 
                        double , 
                        double *);

#endif /* FINITEDIFF_FORWARD_H */

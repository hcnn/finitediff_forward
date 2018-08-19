
import numpy as np
import scipy.optimize as sopt

def func(x): return np.sum(x**2)/len(x)


xk = np.array([-.6, -.5, -.4, -.3, -.2, -.1, 0.0, .1 , .2, .3, .4, .5, .6])
h = 0.001
g = sopt.approx_fprime(xk, func, h)

print(np.round(g,4))

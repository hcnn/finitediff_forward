# finitediff_forward -- Forward Finite Difference Method

### Install
```
clib install hcnn/finitediff_forward
```

### Run Test Skrip
Run `test.c` via

```
make
```

Compare with python

```
python3 test.py
```


### Use typedef for the function pointer
In your application you can use `typedef` to declare the function pointer. 

```
typedef double (*FUNC_PTR)(double *, int);
...
int main(...){
    FUNC_PTR evalfunc = &myfunc;
    ...
}
```

I did not implemented here because the `typedef` should be declared at some other level.


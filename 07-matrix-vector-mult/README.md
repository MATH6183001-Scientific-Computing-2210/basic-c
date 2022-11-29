# 07-matrix-vector-multiplication

This folder contains C sample codes to perform a matrix-vector multiplication.
More specifically, suppose we have a $N\times 1$ vector $**v**$ and a $N\times N$ matrix $\bold{M}$, then we want to calculate a vector $\bold{b}$ as:
$$\bold{b} = \bold{M} \bold{v}$$

## How to run

Run
```sh
make; ./main.out
```

It will print something like:
```sh
M=[
3,      5,      4,
3,      4,      4,
5,      5,      3,      ]
v=[
5,
1,
3,      ]
b=[
32,
31,
39,     ]
```

Note that the exact values might differ as I use random generators.

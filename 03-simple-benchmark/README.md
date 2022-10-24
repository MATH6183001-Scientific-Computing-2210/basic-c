# 03-simple-benchmark

The main idea of this project is to give you an idea how to test and benchmark your function.
One way to test the `functionality` of your function is that you need to try all possible combinations of inputs and expect correct outputs for all inputs.
Secondly, you need to test the `performance` of your function by, for example, running multiple times and measuring the time elapsed.

For this purpose, I'll include two libraries under 2 different directories, namely, `my_correct_lib` and `my_incorrect_lib`. 
Inside the `my_incorrect_lib`, I deliberately return incorrect outputs for a few combinations.

## How to

### Run the correct lib

Run
```sh
make correct; ./main_correct.out
```

The output is:
```
gcc -o my_correct_lib.o -c my_correct_lib/my_lib.c
gcc -c main_correct.c
gcc -o main_correct.out main_correct.o my_correct_lib.o
Time elapsed: 0.016527 s
```
where it shows that the time elapsed is 0.016527 s.


### Run the incorrect lib

Run
```sh
make incorrect; ./main_incorrect.out
```

The output is:
```
gcc -o my_incorrect_lib.o -c my_incorrect_lib/my_lib.c
gcc -c main_incorrect.c
gcc -o main_incorrect.out main_incorrect.o my_incorrect_lib.o
[ERROR] a=2 + b=18 = 17
Time elapsed: 0.000046 s
```
where it shows that an error occurs when `a=2` and `b=18`.
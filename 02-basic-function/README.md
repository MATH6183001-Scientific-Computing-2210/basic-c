# 02-basic-function

Let's just now focus on a simple function that does accepts inputs, performs an operation and returns a value.
The prototype goes like the following.
```
RETURN_TYPE name_of_function ( PARAMETER_TYPE name_of_param,PARAMETER_TYPE name_of_param, etc);
```

Therefore,:
```c
int Addition(int a, int b){
    int c = a+b;
    return c;
}
```
the function name is `Addition`, the inputs are variables `a` and `b` whose types are `int`, and the output type is `int`.

## How to
1. Compile
    ```sh
    gcc -o main.out main.c
    ```

2. Execute
    ```sh
    ./main.out
    ```

    You should see:
    ```
    10 + 13 = 23
    ```


#include <stdio.h>

int fibo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return fibo(n-1) + fibo(n -2);
    }
}

int main() {
    int i = 0;
    int sum = 0;
    int f = fibo(i);
    while (f < 4000000) {
        if (f % 2 == 0) {
            sum += f;
        }
        i++;
        f = fibo(i);
    }
    printf("%d\n", sum);
}
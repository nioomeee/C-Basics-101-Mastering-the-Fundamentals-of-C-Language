#include <stdio.h>

int fib(int n); //declaration

int main() {
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    fib(n); //calling
    return 0;
}

int fib(int n) //definition
{
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int fibN_1 = fib(n - 1);
    int fibN_2 = fib(n - 2);
    int fibN = fibN_1 + fibN_2;
    return fibN;
}

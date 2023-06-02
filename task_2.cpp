#include <stdio.h>

float factorial(int num) {
    float fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

float sumFoo(int n) {
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        float term = factorial(i) / (i * i);
        sum += term;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    float result = sumFoo(n);
    printf("%.2f\n", result);

    return 0;
}

#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    while (1) {
        scanf("%d", &number);
        
        if (number == 0) {
            break;
        }
        
        if (number % 7 == 0) {
            sum += number;
        }
    }

    printf("%d\n", sum);
    return 0;
}
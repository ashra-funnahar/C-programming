#include <stdio.h>

int main() {
    int n = 5, fact = 1;
    int i = 1;
    while (i <= n) {
        fact = fact * i;
        i++;
    }
    printf("Factorial = %d\n", fact);
    return 0;
}

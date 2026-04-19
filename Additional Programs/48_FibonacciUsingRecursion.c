#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num_terms, i;

    printf("Enter the number of terms: ");
    scanf("%d", &num_terms);

    if (num_terms <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series: ");
        for (i = 0; i < num_terms; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}

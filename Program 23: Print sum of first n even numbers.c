#include <stdio.h>

void main() {
    int i, n ,sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += 2 * i ; }
        printf("Sum of first %d even numbers is %d\n", n, sum);
    
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    float c, d;
    
    // Read two integers and two floats from standard input[cite: 1]
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    // Print the sum and difference of the two integers[cite: 1]
    printf("%d %d\n", a + b, a - b);
    
    // Print the sum and difference of the two floats rounded to one decimal place[cite: 1]
    printf("%.1f %.1f\n", c + d, c - d);
    
    return 0;
}

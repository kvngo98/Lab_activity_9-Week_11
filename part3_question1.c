
#include <stdio.h>
#include <math.h>

// Function to compute the integral using the trapezoidal method
float integral(float a, float b, int n, float (*func)(float)) {
    float h = (b - a) / n;
    float sum = 0.5 * (func(a) + func(b));
    for (int i = 1; i < n; i++) {
        sum += func(a + i * h);
    }
    return h * sum;
}

// Example functions
float square_root(float x) {
    return sqrt(x);
}

float ln(float x) {
    return log(x);
}

float exponential(float x) {
    return exp(x);
}

float square(float x) {
    return x * x;
}

float cubic(float x) {
    return x * x * x;
}

int main() {
    float a = 0.0, b = 0.0; 
    int n = 0; // # of discretization points
printf("a");
scanf("%f", &a);

printf("b");
scanf("%f", &b);

printf("n");
scanf("%d", &n);
    
    printf("Integral of sqrt(x) from %.1f to %.1f: %.6f\n", a, b, integral(a, b, n, square_root));
    printf("Integral of ln(x) from %.1f to %.1f: %.6f\n", a, b, integral(a, b, n, ln));
    printf("Integral of exp(x) from %.1f to %.1f: %.6f\n", a, b, integral(a, b, n, exponential));
    printf("Integral of x^2 from %.1f to %.1f: %.6f\n", a, b, integral(a, b, n, square));
    printf("Integral of x^3 from %.1f to %.1f: %.6f\n", a, b, integral(a, b, n, cubic));

    return 0;
}


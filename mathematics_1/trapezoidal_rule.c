// Author: Md Sajib Hossain
// Trapezoidal Rule

#include<stdio.h>
#include<math.h>

double f(double x){
    return x*x;
}

int main() {
    int interval;
    double a, b, h, x, integral, sum=0;
    printf("Enter the number of intervals: ");
    scanf("%d", &interval);
    printf("Enter the initial limit: ");
    scanf("%lf", &a);
    printf("Enter the final limit: ");
    scanf("%lf", &b);
    h = fabs(b - a) / interval;
    for (int i = 0; i < interval; i++) {
        x = a + i * h;
        sum += f(x);
    }
    integral = (h / 2) * (f(a) + f(b) + 2 * sum);
    printf("Integral of f(x) from %lf to %lf is %lf\n", a, b, integral);
    return 0;
}

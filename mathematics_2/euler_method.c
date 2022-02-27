#include<stdio.h>

#define f(x,y) 1 + y  // that is the function change it to your function

int main() {
    float x0, y0, dx, h, yn, slope;
    int i, n;
    printf("Enter Initial Condition\n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("y0 = ");
    scanf("%f", &y0);
    printf("Enter calculation point dx = ");
    scanf("%f", &dx);
    printf("Enter number of steps: ");
    scanf("%d", &n);

    /* Calculating step size (h) */
    h = (dx-x0);

    /* Euler's Method */
    printf("\nx0\ty0\tslope\tyn\n");
    printf("------------------------------\n");
    for(i=0; i < n; i++) {
        slope = f(x0, y0);
        yn = y0 + h * slope;
        printf("%.5g\t%.5g\t%0.5g\t%.5g\n",x0,y0,slope,yn);
        y0 = yn;
        x0 = x0+h;
    }

    /* Displaying result */
    printf("\nValue of y at x = %0.2g is %0.3g\n",dx, yn);

    return 0;
}
#include<stdio.h>

#define f(x,y) y - 1  // that is the function change it to your function

int main() {
    float x0, y0, dx, h, yn, slope;
    int i, n;
    printf("Enter Initial Condition\n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("y0 = ");
    scanf("%f", &y0);
    printf("Enter step size dx = ");
    scanf("%f", &dx);
    printf("Enter number of steps: ");
    scanf("%d", &n);

    /* Calculating step size (h) */
    h = (dx-x0);

    /* Euler's Method */
    printf("\nn\tx0\ty(Euler)\n");
    printf("------------------------\n");
    for(i=0; i < n; i++) {
        slope = f(x0, y0);
        yn = y0 + h * slope;
        printf("%d\t%.5g\t%.5g\n",i+1, x0,y0);
        y0 = yn;
        x0 = x0+h;
    }

    printf("------------------------\n");
    /* Displaying result */
    /* printf("\nValue of y at x = %0.2g is %0.3g\n",dx,yn); */

    return 0;
}

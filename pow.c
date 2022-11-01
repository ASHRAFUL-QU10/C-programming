# include<stdio.h>
# include<math.h>

int main() {
    double p, x, y;
    scanf("%lf %lf", &x, &y);
    p = pow(x , y);
    printf("%lf to the power %lf is: %lf\n", x, y, p);
    return 0;
}
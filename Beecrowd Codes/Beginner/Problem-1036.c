#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, det, R1, R2;
    scanf("%lf %lf %lf", &a, &b, &c);
    det = (b*b-(4*a*c));
    if(det < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = (-b+sqrt(det))/(2*a);
        R2 = (-b-sqrt(det))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }
    return 0;
}


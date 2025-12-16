#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c, d, r1, r2, real, imag;
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;   // discriminant
    if(d > 0) 
	{
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are Real and Distinct: %.2f %.2f", r1, r2);
    }
    else if(d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Roots are Real and Equal: %.2f %.2f", r1, r2);
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Roots are Complex: %.2f+%.2fi  %.2f-%.2fi", real, imag, real, imag);
    }

    return 0;
}

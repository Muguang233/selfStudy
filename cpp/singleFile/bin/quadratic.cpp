#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;
    double x1, x2;

    if (discriminant >= 0) {
        double sqrt_discriminant = sqrt(discriminant);
        x1 = (-b + sqrt_discriminant) / (2 * a);
        x2 = (-b - sqrt_discriminant) / (2 * a);

        // 确保 x1 <= x2
        if (x1 > x2) {
            double temp = x1;
            x1 = x2;
            x2 = temp;
        }

        printf("%.2f %.2f\n", x2, x1);
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

void positive_discriminant(double a, double b, double discriminant)
{
  double sqrt_discriminant = sqrt(discriminant);
  double x1 = (-b + sqrt_discriminant) / (2 * a);
  double x2 = (-b - sqrt_discriminant) / (2 * a);
  printf("x1=%.3f x2=%.3f\n", x1, x2);
}

void zero_discriminant(double a, double b)
{
  double x = -b / (2 * a);
  printf("x1=%.3f x2=%.3f\n", x, x);
}

void negative_discriminant(double a, double b, double discriminant)
{
  double real_part = -b / (2 * a);
  double imaginary_part = sqrt(-discriminant) / (2 * a);
  printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n", real_part, imaginary_part, real_part, imaginary_part);
}

int main()
{
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);

  double discriminant = b * b - 4 * a * c;

  if (discriminant > 0)
  {
    positive_discriminant(a, b, discriminant);
  }
  else if (discriminant == 0)
  {
    zero_discriminant(a, b);
  }
  else
  {
    negative_discriminant(a, b, discriminant);
  }

  return 0;
}
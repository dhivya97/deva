#include <stdio.h>
#include <math.h>

int main()
{
    char base, exponent, result;

    printf("Enter a base number: ");
    scanf("%c", &base);

    printf("Enter an exponent: ");
    scanf("%c", &exponent);
    result = pow(base, exponent);

    printf("%.1lc^%.1lf = %.2lc", base, exponent, result);

    return 0;
}

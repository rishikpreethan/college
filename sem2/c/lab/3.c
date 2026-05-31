// Compute Sin(x) using Taylor series#include <stdio.h>

int main()
{
    float x, term, sum;
    int n, i;

    printf("Enter x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    term = x;
    sum = x;

    for(i = 1; i < n; i++)
    {
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum = sum + term;
    }

    printf("sin(%.2f) = %.6f\n", x, sum);

    return 0;
}
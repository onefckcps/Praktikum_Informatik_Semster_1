#include <stdlib.h>
#include <stdio.h>

// Calculates and returns R_1
int berechneSpannungsteilerUnbelast(double *R_1, double *R_2, double *U_g)
{
    return (*R_2 * *U_g) / (*R_1 + *R_2);
}

int main(char argc, char **argv)
{
    double R_1, R_2, U_g;
    R_1 = 50;
    R_2 = 20;
    U_g = 110;

    printf("%f", berechneSpannungsteilerUnbelast(&R_1, &R_2, &U_g));
}

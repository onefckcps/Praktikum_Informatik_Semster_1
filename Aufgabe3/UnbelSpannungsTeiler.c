#include <stdlib.h>
#include <stdio.h>

FILE *fptr;

double berechneErsatzwiderstand(double *R_2, double *R_L)
{
    return 1 / ((1 / *R_2) + (1 / *R_L));
}

// Calculates and returns R_1
double berechneSpannungsteilerUnbelast(double *R_1, double *R_2, double *R_L, double *U_g)
{
    double ersatz = berechneErsatzwiderstand(R_2, R_L);
    // printf("%f\n", ersatz);
    return (*R_2 * *U_g) / (*R_1 + ersatz);
}

int main(char argc, char **argv)
{

    // Open a file in writing mode
    fptr = fopen("exportValues", "w");

    double R_1, R_2, R_L, U_g;
    R_1 = 50;
    R_2 = 50;
    U_g = 100;
    R_L = 50;

    for (int i = 1; i < 1000; i += 1)
    {
        R_L = i;
        double U_2res = berechneSpannungsteilerUnbelast(&R_1, &R_2, &R_L, &U_g);
        // Write some text to the file
        fprintf(fptr, "%f %f\n", R_L, U_2res);

        // Close the file
        printf("%f %f\n", R_L, U_2res);
    }
    fclose(fptr);
}
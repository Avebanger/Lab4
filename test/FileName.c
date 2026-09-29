#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double TF;
    int TC;
    scanf("%d", &TC);
    TF= (double)TC * (9. / 5.) + 32.;
    printf("%.2lf", TF);
}
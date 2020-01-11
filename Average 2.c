#include<stdio.h>
int main()
{
    float A,B,C,AVG;
    scanf("%f%f%f", &A, &B, &C);
    AVG = ((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1f\n", AVG);
    return 0;
}

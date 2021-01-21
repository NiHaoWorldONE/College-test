#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    scanf("%lf",&a);
    double b = pow(2,a);
    printf("2^%d = %d",(int)a,(int)b);
    return 0;
}

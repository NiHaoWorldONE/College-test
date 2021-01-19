#include <stdio.h>
int main()
{
    int min,max;
    int a,x = 0,i = 0;
    scanf("%d %d",&min,&max);
    for (a = min;a<=max;a++){
        if (i!=0 && i%5==0)
            printf ("\n");
        printf("%5d",a);
        x+=a;
        i++;
    }
    printf("\nSum = %d",x);
    return 0;
}

#include<stdio.h>
int main()
{
    int a,n;
    char b;
    scanf("%d ",&a);
    scanf("%c",&b);
    n = a/2.0+0.5;
    int i;
    for(i=0;i<n;i++){
        int t;
        for (t=0;t<a;t++){
            printf("%c",b);
        }
        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    int n, s=0;
    scanf("%d",&n);
    int i, b=1;
    for(i=1;i<=n;i++){
        b *= i;
        s += b;
    }
    printf("%d",s);
    return 0;    
}

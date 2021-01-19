#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int a[1000];
	int b[1000],c[1000];
    for (i=0;i<n;i++){
        scanf("%lld %d %d",&a[i],&b[i],&c[i]);
    }
    int x,b1[1000];
    scanf("%d",&x);
    for (i=0;i<x;i++){
        scanf("%d",&b1[i]);
        int count = 0;
        for (count =0;count<n;count++){
            if (b1[i]==b[count]){
                printf("%lld %d\n",a[count],c[count]);
                break;
            }
        }
	}
	return 0;
}

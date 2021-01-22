#include <stdio.h>
int main()
{
    char a[55];
    int i=0,t=0;
    double n = 1;
    for (i=0;i<55;i++)
    {
        scanf("%c", &a[i]);
        if (a[i]=='\n')
        	break;
        if ((a[i]-'0') == 2)
            t++;
    }
    if (a[0]=='-')
        n=n*1.5;
    if (a[0]=='-'){
    	if ((a[i-1]-'0')%2==0)
        n=n*2;
        n = 100*n*t/(i-1);
	}
    else{
    	if ((a[i-1]-'0')%2==0)
        n=n*2;
        n = 100*n*t/i;
	}	
    printf("%.2lf%%",n);
    return 0;
    
}

#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d",&a);
    int n;
    int c[10] = {0};
    for(n=0;a>0;n++){
        b = a%10;
        switch(b){
            case 0:
                c[0]++;
                break;
            case 1:
                c[1]++;
                break;
            case 2:
                c[2]++;
                break;
            case 3:
                c[3]++;
                break;
            case 4:
                c[4]++;
                break;
            case 5:
                c[5]++;
                break;
            case 6:
                c[6]++;
                break;
            case 7:
                c[7]++;
                break;
            case 8:
                c[8]++;
            case 9:
                c[9]++;
                break;
        }
        a = a/10;
    }
    int i;
    for(i=0;i<10;i++){
        if (c[i]!=0)
            printf("%d:%d\n",i,c[i]);
    }
    return 0;
}

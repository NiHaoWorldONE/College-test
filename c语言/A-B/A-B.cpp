#include <stdio.h>
#include <string.h>
int main()
{
    char a[10005],b[10005];
    int i;
    gets(a);
    gets(b);
    for(i=0;i<strlen(a);i++){
        int n;
        int is = 0;
        for(n=0;n<strlen(b);n++){
            if(a[i]==b[n]){
                is = 1;
                break;
            }
        }
        if(is == 0)
            printf("%c",a[i]);
    }
    return 0;
}

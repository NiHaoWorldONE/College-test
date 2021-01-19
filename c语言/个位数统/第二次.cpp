#include<string.h>
#include<stdio.h>
int main()
{
	int i=0,t=0;
	char s;
	char string[1000];
	int a[10]={0};
	scanf("%s",string);
	for(i=0;i<strlen(string);i++)
	{
		t=string[i]-'0';
		a[t]++;		
	}
	for(i=0;i<10;i++)
	{
		if(a[i]==0) continue;
		printf("%d:%d\n",i,a[i]);
	}
	return 0;	
}

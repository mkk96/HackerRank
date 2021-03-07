#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	scanf("%s",a);
	long long int b,i,e=0,k,s;
	scanf("%lld",&b);
	s=b%(strlen(a));
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='a')
		e++;
	}
	k=b/(strlen(a))*e;
	e=0;
	for(i=0;i<s;i++)
	{
		if(a[i]=='a')
		e++;
	}
	k=k+e;
	printf("%lld",k);
	return(0);
}
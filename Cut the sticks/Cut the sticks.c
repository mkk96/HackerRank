#include<stdio.h>
int main()
{
	int n,i,min=1001,e,max=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(min>a[i])
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d\n",n);
	while(max!=0)
	{
		e=0;
		for(i=0;i<n;i++)
		{
			a[i]=a[i]-min;
			if(a[i]>0)
			{
				e++;
			}
		}
		
		if(e==0)
		{
			break;
		}
		else
		{
			printf("%d\n",e);
			fflush(stdin);
		}
		
		min=1001;
		max=0;
		for(i=0;i<n;i++)
		{
			if(min>a[i]&&a[i]>0)
			min=a[i];
			if(a[i]>max)
			max=a[i];
		}
	}
	return(0);
}
#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while((t--)!=0)
	{
		long int x,y,z,b,w,c[3],min,i;
		scanf("%ld%ld%ld%ld%ld",&b,&w,&x,&y,&z);
		c[0]=x*b+y*w;
		c[1]=(w+b)*x+w*z;
		c[2]=(w+b)*y+b*z;
		min=c[0];
		for(i=0;i<3;i++)
		{
			if(min>c[i])
			min=c[i];
		}
		printf("%ld\n",min);
	}
	return(0);
}
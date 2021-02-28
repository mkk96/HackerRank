#include<stdio.h>
int main()
{
int num[]={1,9,45,55,99,297,703,999,2223,2728,4950,5050,7272,7777,9999,17344,22222,77778,82656,95121,99999};
int p,q,c=0,i,j;
scanf("%d%d",&p,&q);
if(p>0 && q>p && q<100000)
{
for(i=p;i<=q;i++)
for(j=0;j<21;j++)
{
if(i==num[j]){
printf("%d ",i);
c++;

}

}
if(c==0)
printf("INVALID RANGE");
}
return 0;
}
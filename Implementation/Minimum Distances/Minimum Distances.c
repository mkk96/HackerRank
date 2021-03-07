#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,b[n],k=0,min=n,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]&&min>(j-i))
            {
                min=(j-i);
                flag=1;
            }
        }
    }
    printf("%d",(flag?min:-1));
    return(0);
}
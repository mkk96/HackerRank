#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int n,k;
    scanf("%ld%ld",&n,&k);
    long int rq,cq,m1=0,m2=0,mi1=1000000,mi2=1000000;
    scanf("%ld%ld",&rq,&cq);
    long int r[k],c[k],i,j,m,x=0;
    long int k1=1000000,k2=1000000,k3=1000000,k4=1000000;
    long int k01=0,k02=0,k03=0,k04=0;
    long int o1=0,o2=0,o3=0,o4=0;
    for(i=0;i<k;i++)
    {
        scanf("%ld%ld",&r[i],&c[i]);
    }
    for(i=cq+1;i<=n;i++)
    {
        x++;
    }
    for(i=cq-1;i>0;i--)
    {
        x++;
    }
    for(i=rq+1;i<=n;i++)
    {
        x++;
    }
    for(i=rq-1;i>0;i--)
    {
        x++;
    }
    for(i=rq+1,j=cq+1;i<=n&&j<=n;i++,j++)
    {
        x++;
        k01++;
    }
    for(i=rq-1,j=cq-1;i>0&&j>0;i--,j--)
    {
        x++;
        k02++;
    }
    for(i=rq-1,j=cq+1;i>0&&j<=n;i--,j++)
    {
        x++;
        k03++;
    }
    for(i=rq+1,j=cq-1;i<=n&&j>0;i++,j--)
    {
        x++;
        k04++;
    }
    for(i=0;i<k;i++)
    {
        if(r[i]==rq||c[i]==cq)
        {
            if(r[i]==rq&&c[i]<cq&&m1<c[i])
            {
                m1=c[i];
            }
            else if(r[i]==rq&&c[i]>cq&&mi1>c[i])
            {
                mi1=c[i];
            }
            else if(c[i]==cq&&r[i]<rq&&m2<r[i])
            {
                m2=r[i];
            }
            else if(c[i]==cq&&r[i]>rq&&mi2>r[i])
            {
                mi2=r[i];
            }
        }
        else
        {
            
            if(r[i]>rq&&c[i]>cq&&abs(r[i]-rq)==abs(c[i]-cq)&&k1>abs(c[i]-cq))
            {
                k1=abs(r[i]-rq);
            }
            else if(r[i]<rq&&c[i]<cq&&abs(r[i]-rq)==abs(c[i]-cq)&&k2>abs(c[i]-cq))
            {
                k2=abs(r[i]-rq);
            }
            else if(r[i]<rq&&c[i]>cq&&abs(r[i]-rq)==abs(c[i]-cq)&&k3>abs(c[i]-cq))
            {
                k3=abs(r[i]-rq);
            }
            else if(r[i]>rq&&c[i]<cq&&abs(r[i]-rq)==abs(c[i]-cq)&&k4>abs(c[i]-cq))
            {
                k4=abs(r[i]-rq);
            }
        }
    }
    
        //printf("%ld %ld %ld %ld ",m1,mi1,m2,mi2);
    if(mi1==1000000||mi2==1000000)
    {
        if(mi1==1000000&&mi2==1000000)
        {
            x=x-m1-m2;
        }
        else if(mi2==1000000)
        {
            x=x-m1-m2-(n-mi1+1);
        }
        else if(mi1==1000000)
        {
            x=x-m1-m2-(n-mi2+1);
        }
    }
    else
    {
        x=x-m1-m2-(n+n-mi1-mi2+1+1);
    }
    if(k1!=1000000)
    {
        o1=k01-k1+1;
    }
    if(k2!=1000000)
    {
        o2=k02-k2+1;
    }
    if(k3!=1000000)
    {
        o3=k03-k3+1;
    }
    if(k4!=1000000)
    {
        o4=k04-k4+1;
    }
    x=x-o1-o2-o3-o4;
    printf("%ld",x);
    return(0);
}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,m,i,t=0,c=0,j,d=0,p=0,c1=0;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
        {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(a[i]<a[j])
                {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    c=a[n-1];
   
     for(i=0;i<m;i++)
        {
        for(j=0;j<m;j++)
            {
            if(b[i]<b[j])
                {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    d=b[0];  
    t=0;
    while(c<=d)
        {
        for(i=0;i<n;i++)
            {
            if(c%a[i]==0)
                {
               t++;
            }
        }
        if(t==n)
            {
            for(j=0;j<m;j++)
                {
                if(b[j]%c==0)
                    {
                    p++;
                }
            }
        }
        if(p==m)
            {
            c1++;
        }
        t=0;
        p=0;
        c++;
       

} printf("%d",c1);
    
   
    return 0;
}

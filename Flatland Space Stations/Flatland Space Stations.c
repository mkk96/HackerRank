#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Complete the flatlandSpaceStations function below.
int main()
{
    int n,c_count;
    scanf("%d%d",&n,&c_count);
    int *c=(int *)malloc(sizeof(int)*c_count);
    for(int i=0;i<c_count;i++)
    {
        scanf("%d",&c[i]);
    }
    int max=0;
    if(n==c_count)
    {
        printf("0");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        int min=100002;
        for(int j=0;j<c_count;j++)
        {
            if(min>abs(c[j]-i))
            {
                min=abs(c[j]-i);
            }
        }
        if(min>max)
        {
            max=min;
        }
    }
    printf("%d",max);
    return 0;
}

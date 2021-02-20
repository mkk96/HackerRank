#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1,i,j,k,n=0; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    for(i=0;i<10000;i++)
        {
        j=x1+v1*i;
        k=x2+v2*i;
        if(k==j)
           {
             printf("YES");
            n++;
            break;
    }
    }
    if(n==0)
        printf("NO");
        
    return 0;
}

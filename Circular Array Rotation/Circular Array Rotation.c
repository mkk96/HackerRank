#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    int q; 
    scanf("%d %d %d",&n,&k,&q);
    int data[n];
    for (int i=0;i<n;i++){
        int index = i+k;
        if (index>=n) index = index%n;
        scanf("%d",&data[index]);
    }
    
    for(int i=0;i<q;i++){
        int index;
        scanf("%d",&index);
        printf("%d\n",data[index]);
    }
    return 0;
}
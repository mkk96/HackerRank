#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the fairRations function below.
int main() 
{
    int B_count;
    scanf("%d",&B_count);
    int *B=(int *)malloc(sizeof(int)*B_count);
    for(int i=0;i<B_count;i++)
    {
        scanf("%d",&B[i]);
    }
    int ration=0;
    for(int i=0;i<B_count-1;i++)
    {
        if(B[i]%2)
        {
            B[i]++;
            B[i+1]++;
            ration+=2;
        }
    }
    if(B[B_count-1]%2)
    {
        printf("NO");
    }
    else 
    {
        printf("%d",ration);
    }
    return 0;
}
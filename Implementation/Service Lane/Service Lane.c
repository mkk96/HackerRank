#include <stdio.h>
#include <malloc.h>
int main()
{
    int n,row;
    scanf("%d %d",&n,&row);
    int *service_lane=(int *)malloc(sizeof(int)*n);
    int data[row][2];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&service_lane[i]);
    }
    for (int i=0; i<row; i++)
    {
        scanf("%d%d",&data[i][0],&data[i][1]);
    }
    for(int i=0;i<row;i++)
    {
        int min=100000;
        for(int j=data[i][0];j<=data[i][1];j++)
        {
            if(min>service_lane[j])
            {
                min=service_lane[j];
            }
        }
        printf("%d\n",min);
    }
}
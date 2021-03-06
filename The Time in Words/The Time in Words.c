#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    int h,m;
    scanf("%d %d",&h,&m);
    
    char **hour=(char **)malloc(sizeof(char *)*13);
    for(int i=0;i<13;i++)
    {
        hour[i]=(char *)malloc(sizeof(char)*7);
    }
    hour[1]="one";
    hour[2]="two";
    hour[3]="three";
    hour[4]="four";
    hour[5]="five";
    hour[6]="six";
    hour[7]="seven";
    hour[8]="eight";
    hour[9]="nine";
    hour[10]="ten";
    hour[11]="eleven";
    hour[12]="twelve";
    char **min=(char **)malloc(sizeof(char *)*30);
    for(int i=0;i<30;i++)
    {
        min[i]=(char *)malloc(sizeof(char)*20);
    }
    min[1] ="one";
    min[2] ="two";
    min[3] ="three";
    min[4] ="four";
    min[5] ="five";
    min[6] ="six";
    min[7] ="seven";
    min[8] ="eight";
    min[9] ="nine";
    min[10]="ten";
    min[11]="eleven";
    min[12]="twelve";
    min[13]="thirteen";
    min[14]="fourteen";
    min[15]="fifteen";
    min[16]="sixteen";
    min[17]="seventeen";
    min[18]="eighteen";
    min[19]="nineteen";
    min[20]="twenty";
    min[21]="twenty one";
    min[22]="twenty two";
    min[23]="twenty three";
    min[24]="twenty four";
    min[25]="twenty five";
    min[26]="twenty six";
    min[27]="twenty seven";
    min[28]="twenty eight";
    min[29]="twenty nine";
    if(m==0)
    {
       printf("%s o' clock",hour[h]);
    }
    else if (m==1) 
    {
        printf("%s minute past %s",min[m],hour[h]);
    }
    else if (m==15) 
    {
        printf("quarter past %s",hour[h]);
    }
    else if (m<30) 
    {
        printf("%s minutes past %s",min[m],hour[h]);
    }
    else if (m==30) 
    {
        printf("half past %s",hour[h]);
    }
    else if (m==45) 
    {
        if(h+1==13)
            printf("quarter to %s",hour[1]);
        else
            printf("quarter to %s",hour[h+1]);
    }
    else 
    {
        if(h+1==13)
            printf("%s minutes to %s",min[60-m],hour[1]);
        else
            printf("%s minutes to %s",min[60-m],hour[h+1]);
    }
    return 0;
}
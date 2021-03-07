#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 int n,k;
    scanf("%d %d",&n,&k);
    long * arr = (long *)malloc(sizeof(long)*n);
    int *mod = calloc(k,sizeof(int ));
    if(n==1||k==1)
        {
        printf("1");
        return 0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        scanf("%ld",&arr[i]);      
        mod[(arr[i])%k]++;
    }
    for(int i=1;i<=k/2;i++){
        if(i==k-i&&mod[i]>0){
            ans++;
        }
        else if(mod[i]<mod[k-i]){
            ans+=mod[k-i];
        }
        else{
            ans+=mod[i];
        }
    }
    if(mod[0]>0)
        ans++;
    printf("%d",ans);
    return 0;
}

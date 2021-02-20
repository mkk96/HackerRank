#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
   cin>>n;
    char arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
   int count=0;
    int final=0;
    for(i=0;i<n;i++){
        if(arr[i]=='D'){
            count--;
        }
        if(arr[i]=='U'){
            count++;
            if(count==0){
                final++;
            }
           
            
        }
        
    }
    cout<<final;
    return 0;
}

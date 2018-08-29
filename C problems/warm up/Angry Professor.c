#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int t,p; 
    scanf("%d",&t);
    for(p=0;p<t;p++)
    {
        int n;
        scanf("%d",&n);
        int a[n],i,sum=0,k,count=0;
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<=0)
            {
                sum=sum+1;
            }
            if(a[i]<0)
            {
                count=count+1;
            }
        }
            if(sum>=k)
            {
                
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
    }
    return 0;
}

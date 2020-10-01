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
    scanf("%d %d",&n,&k);
    int a[n],i,j,m,p;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    if(k<a[0])
    {
        p=a[0]-k;
        printf("%d",p);
    }
    if(k>a[0])
    {
        printf("0");
    }
    return 0;
}

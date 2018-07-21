#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n][n];
    int i,j,k,p,r;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    k=0;
    p=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                k=k+a[i][j];
                p=p+a[i][n-i-1];
            }
        }
    }
    
    if(k<p)
    {
        r=-(k-p);
    }
    if(k>p)
    {
        r=k-p;
    }
   printf("%d",r);    
    
    return 0;
}


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n; 
    scanf("%d",&n);
    int a[n];
    int count,i,p,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a[0];
    for(i=0;i<n;i++)
    {
        if(p<a[i])
        {
            p=a[i];
        }
    }
    count=0;
    for(i=0;i<n;i++)
    {
         if(p==a[i])
            {
                count=count+1;
            }
    }
    printf("%d",count);
    return 0;
}


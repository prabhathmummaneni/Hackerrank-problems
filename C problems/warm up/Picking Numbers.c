#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    scanf("%d", &n);
    int a[n],i,j,count=1,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=i+1;
        {
            k=abs(a[i]-a[j]);
            if(k<=1)
            {
                count=count+1;
            }
        }
    }
    printf("%d",count);
    return 0;
}

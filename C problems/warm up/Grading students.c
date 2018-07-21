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
    int a[n],i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=38)
        {
            if(a[i]%5==0)
            {
                printf("%d\n",a[i]);
            }
            if((a[i]+1)%5==0)
            {
                printf("%d\n",a[i]+1);
            }
            if((a[i]+2)%5==0)
            {
                printf("%d\n",a[i]+2);
            }
            if((a[i]+3)%5==0)
            {
                printf("%d\n",a[i]);
            }
            if((a[i]+4)%5==0)
            {
                printf("%d\n",a[i]);
            }
            
        }
        if(a[i]<38)
        {
            printf("%d\n",a[i]);
        }
    }
    

    return 0;
}


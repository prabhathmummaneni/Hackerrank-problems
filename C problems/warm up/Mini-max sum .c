#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long a[5],sum,i,j,k,p;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
     for(i=0;i<=5;i++)
     {
       for(j=i+1;j<=4;j++)
    {
        if(a[i]<a[j])
        {
            k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
    }
     }
    sum=0;
    i=0;
    for(i=i+1;i<5;i++)
    {
       sum=sum+a[i];
    }
    printf("%ld",sum);
    p=0;
    for(i=0;i<4;i++)
    {
        p=p+a[i];
    }
    printf(" %ld",p);
    return 0;
}


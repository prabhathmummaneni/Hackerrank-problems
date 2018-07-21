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
    long a[n],sum,i;
    for(i=0;i<n;i++)
    {
    scanf("%ld",&a[i]);
    }
    sum=0 ;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%ld", sum);
    return 0;
}


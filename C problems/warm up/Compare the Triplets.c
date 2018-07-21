#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int i,a[3],b[3],p,k;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {   
        scanf("%d",&b[i]);
    }
    p=0;
    k=0;
    for(i=0;i<3;i++)
    {if(a[i]<b[i])
    { k=k+1;}
    if(b[i]<a[i])
    { p=p+1;
     }  }
    printf("%d ",p);
    printf("%d",k);
    return 0;
}


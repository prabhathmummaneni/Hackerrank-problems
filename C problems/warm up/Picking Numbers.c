#include <math.h>
#include <stdio.h>
#define ll long long int
int main() {
    ll n; 
    scanf("%d", &n);
    ll a[n],i,j,count=1,k;
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

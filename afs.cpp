#include<bits/stdc++.h>
#define lim 1000000
using namespace std;

long long a[lim+10];

void solveAFS()
{
    for(int i=2; i<=lim; i++)
    {
      
       for(int j = 2*i; j<= lim; j+=i)
       {
           a[j] += i;
       }
   
       a[i] += 1;
    }
    for(int i = 2; i<=lim; i++)
        a[i] += a[i-1];
}

int main ()
{
    solveAFS();

    int t,n;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        printf("%lld\n",a[n]);
    }

    return 0;

}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,d,e,f,i;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        c=i*i;
        d=i*i*i;
        printf("%d %d %d\n",i,c,d);
        e=c+1;
        f=d+1;
        printf("%d %d %d\n",i,e,f);
    }
    return 0;
}

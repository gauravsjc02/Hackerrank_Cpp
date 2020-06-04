#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll p[n],sum=0,toy=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
    {
        sum+=p[i];
        if(sum<=k)
            toy++;
    }
    cout<<toy<<endl;
}

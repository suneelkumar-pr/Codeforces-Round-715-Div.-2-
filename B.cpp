#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7,INF=1e18;
#define ll long long
#define line cout<<"\n";
#define flush cout<<endl;
#define pll pair<ll,ll>
#define x first
#define y second
#define p_all(arr) for(auto i:arr){cout<<i<<" ";}cout<<"\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll test=1;test<=t;test++)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll j=n-1,c1=0,flag=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T')
            {
                c1++;
            }
            else
            {
                c1--;
            }
            if(c1<0)
            flag=0;
        }
        if(n%3||c1!=n/3)
        flag=0;
        c1=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='T')
            {
                c1++;
            }
            else
            {
                c1--;
            }
            if(c1<0)
            flag=0;
        }
        if(n%3||c1!=n/3)
        flag=0;
        if(flag)
        cout<<"YES\n";
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}

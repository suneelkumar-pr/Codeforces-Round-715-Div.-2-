#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>result;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            result.push_back(a[i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
         cout<<a[i]<<" ";
    }
    for(int i=0;i<result.size();i++)
      cout<<result[i]<<" ";
    cout<<"\n";
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n, m, x, prefix=0, maxim=0;

    cin>>n>>m;
    set<ll> s;

    s.insert(0);

    for(int i=1; i<=n; i++)
    {
        cin>>x;

        prefix = (prefix + x)%m;
        maxim = max(maxim, prefix);
        set<ll>::iterator it = s.lower_bound(prefix+1);
        if(it!=s.end())
        {
            maxim = max(maxim, prefix - (*it) + m);
        }
        s.insert(prefix);
    }
    cout<<maxim<<endl;
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



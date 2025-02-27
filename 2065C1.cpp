#include<iostream>
#include<vector>

using namespace std;

void solve()
{
    int n,m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i = 0; i < n; i ++)
        cin >> v[i];

    cin >> m;

    v[0] = ::min(v[0], m - v[0]);

    bool ok = true;
    for(int i = 1; i < v.size(); i ++)
    {
        if(v[i - 1] <= v[i] && v[i - 1] <= m - v[i]) 
        {
             v[i] = ::min(v[i], m - v[i]); 
        }
        else if(v[i - 1] <= v[i]) {}
        else if(v[i - 1] <= m - v[i])
        {
            v[i] = m - v[i];
        }
        else 
        {
             ok = false;
             break; 
        }
    }
    
    cout << (ok ? "YES" : "NO") << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
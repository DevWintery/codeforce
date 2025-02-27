#include<iostream>
#include<string>

using namespace std;

void solve()
{
    string w;
    cin >> w;

    w.replace(w.length() - 2, 2, "i");
    
    cout << w << endl;
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
#include<iostream>
#include<string>
 
using namespace std;
 
void solve()
{
    string s;
    cin >> s;
 
    //operation
    bool ok = false;
    for(int i = 0; i < s.length() - 1; i ++)
    {
        if(s[i] == s[i + 1])
            ok = true;
    }
    
    cout << (ok ? 1 : s.length()) << endl;
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
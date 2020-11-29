#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define tab " "
#define lli long long int

void read(){
    int n, ans = 0;
    string s;

    cin >> n >> s;

    for(int i = 1; i < n; ++i)
        if(s[i-1] == s[i]) ans++;
    
    cout << ans << endl;    
    
    return;
    
}

int main(){
    read();
    return 0;
}
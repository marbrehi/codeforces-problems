#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define tab " "
#define lli long long int

void read(){
    int np, ans = 0;
    bool first, second, third;

    cin >> np;

    while(np--){
        cin >> first >> second >> third;

        if(first&second&third) ans++;
        else if(first& second || first&third || second&third) ans++;
    }

    cout << ans << endl;
    
    return;
    
}

int main(){
    read();
    return 0;
}
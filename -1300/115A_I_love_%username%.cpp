#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define tab " "
#define lli long long int

void read(){
    lli n, mini, maxi, actual, ans = 0;

    cin >> n >> actual;
    mini = actual;
    maxi = actual;
    n--;

    while(n--){
        cin >> actual;

        if(mini > actual) ans++;
        else if (maxi < actual) ans++;

        mini = min(mini, actual);
        maxi = max(maxi, actual);

    }

    cout << ans << endl;
    return;
}

int main(){
    read();
    return 0;
}
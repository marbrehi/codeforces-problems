#include <bits/stdc++.h>

using namespace std;

void read(){
    int n, k, ml;
    float sum = 0;

    cin >> n;
    k = n;

    while (n--){
        cin >> ml;
        sum = sum + ml;
    }

    cout << sum / k << endl;

    return;
}

int main(){
    read();
    return 0;
}
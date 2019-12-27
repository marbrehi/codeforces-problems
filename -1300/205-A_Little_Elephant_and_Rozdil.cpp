#include <iostream>

using namespace std;

void read(){
    int e, n, r = 0, min = 999999999;

    cin >> n;

    for (int i = 1; i <= n; ++i){
        cin >> e;

        if (e == min){
            cout << "Still Rozdil" << endl;
            return;
        }
        else if (e < min){
            min = e;
            r = i;
        }
    }

    cout << r << endl;

    return;
}

int main(){
    read();
    return 0;
}
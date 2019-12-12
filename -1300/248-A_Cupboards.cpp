#include <iostream>
#include <vector>

using namespace std;

void read(){
    int numZx = 0, numOx = 0, numZy = 0, numOy = 0;
    int n, x, y;

    cin >> n;

    for (int i = 0; i < n; ++i){
        cin >> x >> y;

        if (x == 0)
            ++numZx;
        else if (x == 1)
            ++numOx;

        if (y == 0)
            ++numZy;
        else if (y == 1)
            ++numOy;
    }

    int minX = min (numZx,numOx);
    int minY = min (numZy,numOy);

    cout << (minX + minY) << endl;

    return;
}

int main(){
    read();
    return 0;
}
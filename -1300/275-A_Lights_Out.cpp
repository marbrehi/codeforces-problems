#include <iostream>
#include <vector>

using namespace std;

void borders (vector<bool>&status, int i){

    status[i] = !status[i];

    if (i < 7){
        status[i+3] = !status[i+3];
    }
    if (i > 3){
        status[i-3] = !status[i-3];
    }
    if ( i != 1 && i != 4 && i != 7){ //For the right borders
        status[i-1] = !status[i-1];
    }

    if (i % 3 != 0){
        status[i+1] = !status[i+1];
    }
    return;
}

void read(){
    vector<int> status(10,0);
    vector<bool> values (10,1);
    int e;

    for(int i = 1; i <= 9; ++i){
        cin >> status[i];
    }

    for (int j = 1; j <= 9; ++j){
        if (status[j] % 2 == 1){//if it's odd, then change
            borders (values, j);
        }
        else if (status[j] % 2 == 0){//if it's pair, then maintain its value
            continue;
        }
    }

    for(int i = 1; i <= 9; ++i){
        cout << values[i];

        if (i == 3 || i == 6)
            cout << endl;
    }

}

int main(){
    read();
    return 0;
}
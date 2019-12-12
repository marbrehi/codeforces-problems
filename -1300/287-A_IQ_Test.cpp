#include <iostream>
#include <vector>

using namespace std;

void printMatrix (char M[4][4]){
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 4; ++j)
            cout << M[i][j] << " ";
        cout << endl;
    }
}

bool isChase (vector<char>& V){
    int B = 0, W = 0;

    for (int i = 0; i < 4; ++i){
        if (V[i] == '#')
            ++B;
        else
            ++W;
    }

    if (B > W || W > B)
        return true;
    if (B == W)
        return false;
    if (B == 0 || W == 0)
        return true;
}

void read(){
    char M[4][4];

    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 4; ++j){
            cin >> M[i][j];
        }
    }

    //cout << "Matrix: " << endl;
    //printMatrix(M);

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            
            vector<char> party;

            party.push_back (M[i][j]);
            party.push_back (M[i+1][j]);
            party.push_back (M[i][j+1]);
            party.push_back (M[i+1][j+1]);

            if (isChase(party)){
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
    return;
}

int main(){
    read();
    return 0;
}
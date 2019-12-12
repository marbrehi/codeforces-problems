#include <bits/stdc++.h>

using namespace std;

void analyze (string s);

int main(){
    string borze_code;

    while(cin >> borze_code){
        analyze(borze_code);
        cout << endl;
    }

    return 0;
}

void analyze (string s){

    for (int i = 0; i < s.size(); ++i){
        if (s[i] == '.'){
            cout << "0";
        }
        else if (s[i] == '-'){
            if (s[i+1] == '-'){
                cout << "2";
            }
            else if (s[i+1] == '.'){
                cout << "1";
            }
            ++i;
        }
    }
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void read(){
    int k, ref = 0;
    char c;
    string s;
    vector<int> bucket (0,26), letters;

    cin >> k >> s;

    if (s.size()%k != 0){
        cout << "-1" << endl;
        return;
    }
    
    for (int i = 0; i < s.size(); ++i){
        bucket[s[i]]++;
    }
    for (int i = 0; i < 27; ++i){
        if (bucket[i] > 0)
            letters.push_back(i);
    }
    
    if (letters.size() != k){
        cout << "-1" << endl;
        return;
    }

    ref = bucket[letters[0]];

    for (int i = 0; i < letters.size(); ++i){
        if (ref != bucket[letters[i]]){
            cout << "-1" << endl;
            return;
        }
    }

    for (int j = 0; j < ref; ++j){
        for (int i = 0; i < letters.size(); ++i){
            c = bucket[letters[i]];
            cout << c ;
        }
    }
    return;
}

int main(){
    read();
    return 0;
}
#include <vector>
#include <iostream>

using namespace std;

void printBucket(vector<int>& bucket){
    char c;
    cout << "bucket list:" << endl;
    for (int i = 0; i < 125; ++i){
        c= i;
        cout << c << " - " << bucket[i] << " " << endl;
    }
    cout << endl;
}

void bucketing (string heading, string phrase){
    vector<int> bucket (125,0);

    //bucket the heading
    for (int i = 0; i < heading.size(); ++i){
        if (heading[i] == 32){
            continue;
        }
        else{
            ++bucket[heading[i]];
        }
    }

    //printBucket(bucket);

    //Des-bucketing the phrase
    for (int k = 0; k < phrase.size(); ++k){
        if (phrase[k] == 32){
            continue;
        }
        else{
            if (bucket[phrase[k]] > 0){
                --bucket[phrase[k]];
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
    return;
}

void read(){
    char c, d;
    string heading, phrase;

    getline(cin, heading);
    getline(cin, phrase);

    bucketing(heading, phrase);

    return;
}

int main(){
    read();
    return 0;
}
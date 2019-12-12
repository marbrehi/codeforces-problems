#include <bits/stdc++.h>

using namespace std;

bool prove (string& cad1, string& cad2, string& cad);

int main (){
    string cad1;
    string cad2;
    string cad;

    cin >> cad1;
    cin >> cad2;
    cin >> cad;

    if (prove (cad1, cad2, cad) == 1)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}

bool prove (string& cad1, string& cad2, string& cad){
    vector<int> bucket (25, 0);
    int flag = 0;
    
    if (cad1.size() + cad2.size() == cad.size()){

        for (int k = 0; k < cad1.size(); ++k){
            ++bucket[cad1[k]-65];
        }

        for (int j = 0; j < cad2.size(); ++j){
            ++bucket[cad2[j]-65];
        }

        for (int i = 0; i < cad.size(); ++i){
            --bucket[cad[i]-65];
        }

        for (int k = 0; k < bucket.size(); ++k){
            if (bucket[k] > 0){
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            return 1; //si se puede reformar la cadena
        }
        else{
            return 0;
        }
    }
    else
        return 0;
}
#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int>&V){
    for (int i = 0; i < V.size(); ++i){
        cout << V[i]+1 << " ";
    }
    cout << endl;
}

void process (){
    vector<int> V;
    int n;
    
    cin >> n;

    if (n%2 == 1){
        cout << "-1" << endl;
        return;
    }

    for (int i = 0; i < n; ++i){
        V.push_back(i);
    }

    for (int k = 0; k <= (n-1); k+=2){
        swap(V[k], V[k+1]);
    }

    printVector(V);

    return;
}

int main(){
    process();
    return 0;
}
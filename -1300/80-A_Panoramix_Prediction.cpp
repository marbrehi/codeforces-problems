#include <iostream>
#include <vector>

using namespace std;

vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

bool isPrime(int x){

    for (int i = 0; i < primes.size(); ++i){
        if (primes[i] == x)
            return true;
    }
    return false;
    
}

int findPosition(int x){

    for (int i = 0; i < primes.size(); ++i){
        if (primes[i] == x)
            return i;
    }
    
}

void wins (int x, int y){
    if (isPrime(y)){
        if ((findPosition(y)-findPosition(x))==1 || (findPosition(y)-findPosition(x))==-1){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main(){
    int x, y;

    cin >> x >> y;
    wins (x,y);

    return 0;
}
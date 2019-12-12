#include <bits/stdc++.h>

using namespace std;

int resta_menor(vector<int>& tam_puzzle, int n_students);

int main(){
    int n_students = 0, n_puzzles = 0, element = 0;
    vector <int> tam_puzzle = {};

    cin >> n_students;
    cin >> n_puzzles;

    while (n_puzzles--){
        cin >> element;
        tam_puzzle.push_back(element);
    }

    cout << resta_menor(tam_puzzle, n_students);

    return 0;
}

int resta_menor(vector<int>& tam_puzzle, int n_students){
    int n = tam_puzzle.size();
    int RESTA_MENOR = 10000000;
    int i = 0, resta = 0;

    sort (tam_puzzle.begin(), tam_puzzle.end());

    while ((i + n_students - 1) < n){

        resta = tam_puzzle[i + (n_students)-1] - tam_puzzle [i];

        if (resta < RESTA_MENOR){
            RESTA_MENOR = resta;
        }

        ++i;
    }

    return RESTA_MENOR;
}
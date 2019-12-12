//Eliminar el cero y que sea el cero más a la izquierda (:
#include <bits/stdc++.h>

using namespace std;

int main(){
    string binar; 
    int count_unos = 0, flag = 0;

    cin >> binar;

    for(int i = 0; i < binar.size(); ++i){

        if(binar[i] == '0' && flag == 0){
            flag = 1;
        }
        else{
            if (binar[i] == '1'){
                ++count_unos;
            }

            if (count_unos == binar.size()){ // si hay puros unos
                //no se imprime el último 1
            }
            else{
                cout << binar[i];
            }
        }
    }

    return 0;
}

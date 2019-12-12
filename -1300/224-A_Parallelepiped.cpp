#include <iostream>
#include <vector>

using namespace std;

//aquí está el truco
void mcds (int x, int y, int z, vector<int>& divisors){
    int i = 1, x_, y_, z_;

    while(x > 0 && y > 0 && z > 0){

        x_ = x;
        y_ = y;
        z_ = z;

        if (x%i == 0){
            if ((x / i) == 1){
                x = -1;
                break;
            }
            else x =  x / i;
        }
        if (y%i == 0){
            if ((y / i) == 1){
                y = -1;
                break;
            }
            else y =  y / i;
        }
        if (z%i == 0){
            if ((z / i) == 1){
                z = -1;
                break;
            }
            else z =  z / i;
        }

        if (x >= i && y >= i && z >= i){
            ++i;
        }
        else{
            continue;
        }
    }

    cout << "x, y, z: " << x_ << y_ << z_ << "\n\n";

    divisors.push_back(x_);
    divisors.push_back(y_);
    divisors.push_back(z_);
    return;
}

void edgesSum (vector<int>& divisors){
    int sum1 = 0, sum2 = 0;

    sum1 = 2*(2*divisors[0]) + (2*divisors[1]);
    cout <<"div0 y div1: " << divisors[0] << divisors[1] << endl;
    cout << "Suma de los grandes: " << sum1 << endl;
    sum2 = (4*divisors[2]);
    cout << "Suma de las aristas: " << sum2 << endl;

    cout << sum1+sum2 << endl;
}

void read(vector<int>& divisors){
    int x, y, z;

    cin >> x >> y >> z;

    mcds(x, y, z, divisors);

    edgesSum(divisors);

    return;
}

int main(){
    vector<int> divisors = {};

    read(divisors);

    return 0;
}
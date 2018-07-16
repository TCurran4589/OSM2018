#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float x, y;
    cout << "Value for x?" << endl;

    cin >> x;

    //find the zero of cos(x) - x
    //f' = -sin(x) - 1
    
    y = -1 * sin(x) - 1;

    cout << y << endl;

}

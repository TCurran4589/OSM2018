#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

float quadratic_equation(float a, float b, float c){
   
    cout <<  ((-1 * b) + sqrt( pow(b,2) - 4 * a * c ))/ 2 * a << endl;
    cout <<  ((-1 * b) - sqrt( pow(b,2) - 4 * a * c ))/ 2 * a << endl;
}


int main(){
    float a,b,c,x1,x2;

    cout << "Value for a?" << endl;
    cin >> a;

    cout << "Value for b?" << endl;
    cin >> b;

    cout << "Value for c?" << endl;
    cin >> c;

    x1,x2 = quadratic_equation(a,b,c);

   // printf("ax^2 + bx + c =  %f * %f^2 + %f*%f + %f = 0\n",a,x1,b,x1,c);
   
   //  printf("ax^2 + bx + c =  %f * %f^2 + %f*%f + %f = 0\n",a,x2,b,x2,c);

    return 0;
}


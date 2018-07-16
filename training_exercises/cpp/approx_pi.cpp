#include <iostream>
#include <math.h>
#include <stdio.h>
#include <random>
#include <stdlib.h>

using namespace std;

int main(){

    double iterations = 1000000;
    double x,y;
    int i;
    int count = 0;
    double z, pi;

    for(i = 0; i < iterations; ++i ){
        x = random();
        y = random();

        z = sqrt(pow(x,2)+pow(y,2));

       // cout << z << endl;
        if(z <- 1 ){
            ++count;
       //      cout << count << endl;
        };
    }

    pi = count/iterations * 4.0;
    printf("Pi = %f",pi);
    return 0;
}




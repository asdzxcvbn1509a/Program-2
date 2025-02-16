#include <iostream>

using namespace std;

int main() {
    cout << "Permutation with Repetition" << endl;
    long long red, blue, sum, red_fac=1, blue_fac=1, sum_fac=1, result;
    cout << "Enter the number of red ball : ";
    cin >> red; 
    cout << "Enter the number of blue ball : ";
    cin >> blue;
    sum = red+blue;
    
    for (int i=1; i<=sum; i++) {
        sum_fac = sum_fac*i;
    }
    for (int i=1; i<=red; i++) {
        red_fac = red_fac*i;
    }
    for (int i=1; i<=blue; i++) {
        blue_fac = blue_fac*i;
    }
    result = sum_fac/(red_fac*blue_fac);//(a+b)!/(a!*b!)
    cout << "Number of possibilities for arranging balls : "<< result << " ways";
    return 0;
}

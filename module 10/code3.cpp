// g++-15 -std=c++26 -O2 code3.cpp -o code3 && ./code3
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 23;
    int* ptr = &x;
    cout << &x << " "
         << ptr << endl;
    x = 32;
    cout << *ptr << endl;
    *ptr = 43;
    cout << x << endl;
    cout << *ptr << endl;
    return 0;
}
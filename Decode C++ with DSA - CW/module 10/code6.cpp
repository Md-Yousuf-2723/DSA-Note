// g++-15 -std=c++26 -O2 code6.cpp -o code6 && ./code6
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 23;
    int *ptr = &x;

    cout << *ptr << " " // 23
         << ptr << endl; // 0x16d37710f
    
    (*ptr)++;
    cout << *ptr; // 24
    return 0;
}
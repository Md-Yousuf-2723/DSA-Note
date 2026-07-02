// g++-15 -std=c++26 -O2 code9.cpp -o code9 && ./code9
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 23;
    int *ptr = &x;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;

    cout << &x << endl; // 0x16ddcf0fc
    cout << ptr << endl; // 0x16ddcf0fc

    cout << &ptr << endl; // 0x16ddcf100
    cout << ptr2 << endl; // 0x16ddcf100

    cout << &ptr2 << endl; // 0x16ddcf108
    cout << ptr3 << endl; // 0x16ddcf108

    return 0;
}
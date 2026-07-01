// g++-15 -std=c++26 -O2 code5.cpp -o code5 && ./code5
#include<bits/stdc++.h>
using namespace std;

void Swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    return;
}

int main(){
    int a, b;
    cout << "Enter a, b : ";
    cin >> a >> b;

    Swap(a,b);

    cout << "a = " << a << " b = " << b << endl;
    return 0;
}
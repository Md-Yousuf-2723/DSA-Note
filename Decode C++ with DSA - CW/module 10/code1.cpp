// g++-15 -std=c++26 -O2 code1.cpp -o code1 && ./code1
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << sizeof(char) << " "
         << sizeof(bool) << " "    
         << sizeof(int) << " "
         << sizeof(long) << " "
         << sizeof(long long) << " "
         << sizeof(float) << " "
         << sizeof(double) << endl;
}
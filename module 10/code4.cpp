// g++-15 -std=c++26 -O2 code4.cpp -o code4 && ./code4
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2;

    int *ptr1 = &num1, *ptr2 = &num2;

    cout << "Enter num - 1 & num - 2: ";
    cin >> *ptr1 >> *ptr2;

    int sum = *ptr1 + *ptr2;
    cout << "Sum = " << sum << endl;

    int var, *ptr;
    
    return 0;
}
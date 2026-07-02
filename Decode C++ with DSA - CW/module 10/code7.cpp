// g++-15 -std=c++26 -O2 code7.cpp -o code7 && ./code7
#include<bits/stdc++.h>
using namespace std;

void find(int n, int *ptr1, int *ptr2){
    *ptr2 = n % 10;
    while(n > 9){
        n /= 10;
    }
    *ptr1 = n;
    return;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int firstDig, lastDig;

    find(n, &firstDig, &lastDig);

    cout << "First digit = " << firstDig << endl
         << "Last digit = " << lastDig << endl;
    return 0;
}
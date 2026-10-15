#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int input ;
    cin >> input ;
    int arr[input] ;
    
    for ( int i = 0 ; i < input ; i++ ) {
        cin >> arr[i] ;
    }
    for ( int i = input-1 ; i >= 0 ; i-- ) {
        cout << arr[i] << " " ;
    }
    return 0;
}

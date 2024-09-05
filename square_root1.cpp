#include<iostream>
using namespace std ;

//square root in decimal value using binary search 

int binarysearch_sqrt ( int n ) {
    int start = 0 ;
    int end = n ;
    long long int mid = start + ( end - start )/ 2 ;
    long long int ans = - 1;

    while ( start <= end ) {
        int square = mid*mid ;

        if ( square == n ) {
            return mid ;
        }

        if ( square < n ) {
            ans = mid ;
            start = mid + 1 ;
        }
        else {
            end = mid - 1 ;
        }
        mid = start + ( end - start )/ 2 ;
    }
    return ans ;

}

double moreprecision ( int n , int precision , int temp) {

    double factor = 1 ;
    double ans = temp ;

    for ( int i = 0 ; i < precision ; i++) {
        factor = factor / 10 ;
        for ( double j = ans ; j*j< n ; j = j + factor) {
            ans = j ;
        }
    }
    return ans ;
}

int main () {
    int n ; 
    cin >> n ;
    int temp = binarysearch_sqrt(n );
    cout << moreprecision(n  , 3 , temp);

    return 0 ;

}
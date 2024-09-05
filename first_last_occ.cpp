#include<iostream>
using namespace std ;

//first and last occurence 

int firstocc ( int arr[] , int size , int k) {
    int start = 0 ;
    int end = size - 1; 
    int mid = start + ( end - start )/2 ;
    int ans = -1 ;

    while ( start <= end ) {
        if ( k == arr[mid]) {
            ans = mid ;
            end = mid - 1;
        }
        if ( k > arr[mid]) {
            start = mid + 1 ;
        }
        if ( k < arr[mid] ) {
            end = mid - 1 ;
        }
        mid = start + ( end - start )/2 ;

        
    }
    return ans ;
}

int lastocc ( int arr[] , int size , int k) {
    int start = 0 ;
    int end = size - 1; 
    int mid = start + ( end - start )/2 ;
    int ans = -1 ;

    while ( start <= end ) {
         if ( k == arr[mid]) {
           ans = mid ;
           start = mid + 1 ;
        }
        if ( k > arr[mid]) {
            start = mid + 1 ;
        }
        if ( k < arr[mid] ) {
            end = mid - 1 ;
        }
        mid = start + ( end - start )/2 ;

    }
    return ans ;
}
int main () {
    int arr [] = { 1 , 1 , 2, 2, 2 ,2 , 2 , 2,  3} ;
    cout << firstocc(arr , 9 , 2 ) << endl ;
    cout << lastocc(arr , 9 , 2 ) << endl ;


}
#include<iostream>
using namespace std ;

//binary search

int binarysearch ( int arr[] , int size , int key ) {
    int start = 0 ;
    int end = size - 1 ;
    int mid = start + ( end - start )/ 2 ;

    while ( start <= end ) {

        if (arr[mid]==key) {
            return mid ;
        }
        else if ( key > arr[mid] ) {
            start = mid + 1 ;
        }
        else {
            end = mid - 1 ;  
        }
        mid = start + ( end - start )/ 2 ;
    }

    return -1 ;

}

int main () {

    int even[6] = { 2 , 4 , 6 , 8 , 12 , 18 } ;
    
    int index = binarysearch( even , 6 , 8 ) ;
    cout << index << endl;

      
}          
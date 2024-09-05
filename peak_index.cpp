#include<iostream>
using namespace std ;

//Peak index in a mountain array 

int peak ( int arr[] , int size ) {
    int start = 0 ;
    int end = size - 1 ;
    int mid = start + (end - start )/ 2 ;

    while ( start < end ) {
        if ( arr[mid] < arr[mid+1]) {
            start = mid + 1 ;
        }
        if ( arr[mid] > arr[mid+1]) {
            end = mid ;
        }
        mid = start + (end - start )/ 2 ;
    }
    return start ;
}



int main () {
    int arr[] = { 3,4,5,1};
    

}
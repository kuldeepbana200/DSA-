#include<iostream> 
using namespace std ;

//find position using pivot 

int pivot ( int arr[] , int size ) {
    int start = 0 ; 
    int end = size - 1 ;
    int mid = start + (end - start)/2 ;

    while (start < end ) {
       if ( arr[mid] >= arr[0]) {
        start = mid + 1 ;
       }
       if( arr[mid] < arr[0]) {
        end = mid ;
       }
       mid = start + (end - start)/2 ;
    }
    return start ;

}
int binarysearch ( int arr[] , int s, int e , int key ) {
    int start = s ;
    int end = e ;
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

int find (int arr[] , int n , int key  ) {
    int start = 0 ;
    int end = n - 1 ;
    int mid = start + ( end - start)/2 ;

    int p = pivot(arr,n) ;

   if ( key >= arr[p] && key <= arr[n-1]) {
    return binarysearch(arr , p , n-1 , key ) ;
   }
   else {
    return binarysearch(arr , 0 , p-1 , key ) ;
   }

}

int main () {
    int arr[] = { 7 , 9 , 10 , 1 , 2 , 3} ;
    cout << find(arr , 6 , 1  ) ;
}
#include<iostream>
using namespace std ;

bool IsPossible ( int arr[] , int n , int m , int mid) {

    int studentcount = 1 ;
    int pagesum = 0 ;

    for ( int i = 0 ; i < n ; i++) {
        if(pagesum + arr[i] <= mid) {
            pagesum = pagesum + arr[i] ;
        }
        else {
            studentcount++ ;
            if(studentcount>m || arr[i]> mid) {
                return false ;
            }
            pagesum = arr[i] ;
        }
    }
}

int allocatebooks ( int arr[] , int n , int m) {
    int start = 0 ; 
    int sum = 0 ;

    for ( int i = 0 ; i < n ;i++ ) {
        sum = sum + arr[i] ;
    }

    int end = sum ;
    int ans = -1 ;
    int mid = start + (end - start )/2 ;


    while (start <= end ) {
        if(IsPossible(arr,n,m,mid)){
            ans = mid ;
            end = mid - 1;

        }
        else {
            start = mid + 1 ;
        }
        mid = start + (end - start )/2 ;
    }
    return ans ;
}

int main () {
    int arr[] = { 10 , 20 , 30 , 40,50};
    cout<<allocatebooks(arr,5,3);

return 0 ;
}
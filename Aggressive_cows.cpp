#include<iostream>
using namespace std;

bool ispossible ( int arr[] , int n , int k , int mid ) {
 
    int lastpos = arr[0];
    int count = 1;

    for ( int i = 0 ; i < n ; i ++) {
        if(arr[i]-lastpos >= mid) {
            count ++ ;
            if(count==k) {
                return true;
            }
            lastpos = arr[i] ;
        }
    }
    return false ;

}

int aggressive_cows(int arr[] , int n , int k) {
    
    //First Sort the array
    //sort(arr.begin(),arr.end());



    int s = 0 ;
    int maxi = -1;
    for ( int i = 0 ; i < n ; i++) {
        maxi = max(maxi,arr[i]);
    }
    int e = maxi;
    int mid = s + ( e - s )/2 ;
    int ans = -1;

    while ( s <= e ) {
        if(ispossible(arr,n,k,mid)){
            ans = mid ;
            s = mid + 1 ;
        }
        else {
            e = mid - 1;
        }
        mid = s + ( e - s )/2 ;
    }
    return ans ;
}
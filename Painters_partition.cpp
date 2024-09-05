#include<iostream>
using namespace std ;

//same as book allocation 

bool ispsble ( int arr[] , int n , int m , int mid) {
    int sum = 0 ;
    int count = 1 ;

    for ( int i = 0 ; i < n ; i++ ) {
        if(arr[i]+sum <= mid) {
            sum  = sum + arr[i] ;
        }
        else {
            count ++ ;
            if(count>m || arr[i]>mid) {
                return false;
            }
            sum = arr[i];
        }
    
    }
}

int painter ( int arr[] , int n , int m ) {
    int start = 0 ;
    int sum = 0 ;
    int ans = -1 ;
    
    for ( int i = 0 ; i < n ; i++) {
        sum = sum + arr[i] ;
    }

    int end = sum ;
    int mid = start + (end - start)/2 ;

    while (start<end)
    {
        if (ispsble(arr,n,m,mid)) {
        ans = mid ;
        end = mid - 1 ;
    }
        else {
        start = mid + 1 ;
    }
    mid = start + (end - start)/2 ;

        
    }
    
    return ans ;
}

int main () {
    int arr[] = { 10,10,20,20,30} ;
    cout << painter(arr,5,2);

return 0 ;
}
#include<iostream>
using namespace std ;

int main () {

    int arr[10] = {0,3,4,5};

    cout << "Address of First memory block is  -->" <<arr <<endl;
    cout << arr[0] << endl;
    cout << "Address of First memory block is  -->" <<&arr[0] <<endl;
    cout << "Address of First memory block is  -->" <<&arr <<endl;

    cout << *arr <<endl;
    cout << *arr +1 <<endl;
    cout<< *(arr+2) <<endl;

    cout << 1[arr] << endl;  //i[arr] = arr[i]
    cout << *(arr+1) << endl;

    int *p = &arr[0];
    cout << sizeof(p) << endl;
    
    
    //ERROR
    // arr = arr + 1 ;
    cout << p << endl ;
    p = p + 1 ;
    cout << p << endl ;
    
    
    return 0 ;
}

#include<iostream>
using namespace std ;

int main () {

    int num = 5 ;
    cout << num << endl;

    //& --> address of operator 
    cout <<"Address of num is : " << &num << endl;
   
    int *ptr = &num;
    // * --> value af memory at which pointer is pointing 
    cout << "Value is " << *ptr <<endl;
    cout << "Address is " << ptr <<endl;

    double d = 4.3 ;
    double *p2 = &d ;
    cout << "Value is " << *p2 <<endl;
    cout << "Address is " << p2 <<endl;

    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(p2) << endl;
    //size of pointer is 8 !! 

    int n = 5 ;
    int *p = &n ;
    cout << n << endl;
    (*p)++;
    cout << n << endl;
    int a = *p ;
    a++;
    cout << n << endl;

    //copying a  pointer
    int *q = p;
    cout << *p << " - " << *q << endl;
    cout << p << " - " << q << endl;

    //Important !!
    cout << "Previous - " << p << endl;
    p = p + 1 ; //4 bytes are added , since size of 1 integer is 4 bytes 
    cout << "Present - " << p << endl;
    
    //wild pointer || dangeling pointer

return 0 ;
}
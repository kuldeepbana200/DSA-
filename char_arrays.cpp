#include<iostream>
using namespace std ;

int main () {

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde" ;
    char k[] = {'a','b','c','d','e','0'};
    char l[] = "kuldeep" ;
    char m[] = {'a','b','c','d','e','0'};
    char n[] = {'a','b','c','d','e','0'};
    char o[] = {'a','b','c','d','e','\0'};


    cout << arr << endl;
    cout <<  ch << endl;
    cout <<  k  << endl;
    cout <<  l  << endl;
    cout <<  m  << endl;
    cout <<  n  << endl;
    cout <<  o  << endl;

    //WTF it is happening 

    char *c = &ch[0] ;
    //Attention Here
    cout << "Attention :" <<endl;
    cout << c << endl; //Prints string 
    cout << *c << endl;//Prints first element of string
    cout << &c << endl ; //Prints Address of pointer of string 
    cout << &ch[0] << endl;//Prints string
    cout << ch[0] << endl;//Prints first element of string 
    cout << &ch << endl;//Prints Address of first element of string 
    cout << &ch + 1 << endl;//Prints Address of second element of string 
    cout << &ch[0] + 1 << endl;//Prints //Pata nhi kya aa gya  



return 0 ;
}
#include<iostream>
#include<string>
using namespace std ;   

int main () {
    // int n = 5 ;
    // int *p = &n ;
    // int **ptr = &p;

    // cout << n << endl;
    // cout << &n << endl;
    // cout << *p << endl;
    // cout << p << endl;
    // cout << *ptr << endl;
    // cout << **ptr << endl;
    // cout << &p << endl;


    string s = "kuldeep" ;
    string *p = &s;
    char ch = 's' ;
    char *pch = &ch ;
    string **pt = &p ;
    char **pchh = &pch ;

    cout << s << endl;
    cout << *p << endl;
    cout << &s << endl;
    cout << p << endl;
    cout << ch << endl;
    cout << &ch << endl;
    cout << *pch << endl;
    cout << pch << endl;

}
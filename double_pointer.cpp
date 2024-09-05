#include<iostream>
using namespace std ;

void update (int **p2) {
    // p2 = p2 + 1 ;
    //Kuch change hoga ??  Nope

    // *p2 = *p2 + 1 ;
    //Kuch change hoga ?? yup! 
    // address of p changed 


    // **p2 = **p2 + 1 ;
    //Kuch change hoga ?? yup!
    //value of i changed 
}

int main () {

    int i = 5 ;
    int *p = &i ;
    int **p2 = &p ;

    cout << "Printing p " << p << endl;
    cout << "Address of p " << &p << endl;

    cout << *p2 << endl;

    cout << i << endl;
    cout << *p << endl ;
    cout << **p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << &p << endl;
    cout << p2 << endl;

    cout << endl << endl ;

    cout << "Before" << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
    cout << endl;

    update(p2);
    
    cout << "After" << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    cout << endl << endl ;











    return 0 ;
}
#include <iostream>
using namespace std;

void update(int **p){

    //**p= **p + 1 ;

     *p = *p +1 ;
}

int main(){
    int i = 5 ;

    int* p = &i ;
    int** p2 = &p ;

    cout << &p << endl ;

    cout << *p << endl ;
    cout << **p2 << endl ;

    update(&p);
 
 return 0;

    
}
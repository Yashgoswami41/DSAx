#include <iostream>
using namespace std ;

void print(int *p){

    cout << *p << endl ;
}

void update(int *p){

    *p = *p+1 ;
}
int main(){

    int value = 9 ;
    int *p = &value ;

   
     
    update(p) ;
    cout << "after the update   " << *p <<  endl;


    return 0;
}
#include <iostream>

using namespace std ; 

void printarray( int arr[] , int size ){

    cout << "printing the array" << endl;

    for (int  i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }

    cout << " printed" << endl ;
    
    
}

int main () {

    int third[7]= {2,7};
    
    int n = 7 ;
    printarray (third , 7);

    

    return 0;
}
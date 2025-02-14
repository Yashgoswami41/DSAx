#include <iostream>
using namespace std ;

int pivotArr(int arr[], int n){

    int s= 0 , e= n-1 ;

    int mid = s+ (e-s)/2 ;

    while (s< e){

        if (arr[mid] >= arr[0])
        {
             s= mid + 1 ;
        }

        else {

            e= mid ; 
        }

        mid = s+ (e-s)/2 ;
        
    }

    return s ; 
}


int main() {

    int arr[5]= {2,5,8,0,1} ;

    cout << "pivot is " << pivotArr( arr , 5 ) << endl ;
}
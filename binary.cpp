#include <iostream>

using namespace std ;

int binaryserach ( int arr[] , int size , int key   ){
    int start = 0 ;
    int end = size - 1 ;

    int mid = 0 ; 

    while ( start <= end ){
         mid = (start + end )/2 ;
         if(arr[mid] == key){
            return mid;
         }
          else if (arr[mid] < key){
            start = mid + 1 ;
        }
        else {
            end = mid -1; 
        }
        
    }
    return -1;
}

int main() {

    int even [4] = {2,4,6,8}; 

    int odd [4] = {1,3,5,7};

    int index = binaryserach(even, 4 , 8  );
    cout << index << endl ;



}
#include <iostream>
using namespace std ;

int firstocc(int nums[], int n, int target){

    int s= 0 , e= n-1; 
    int mid = s+ (e- s)/2 ;
    int ans = -1 ;

    while(s<= e){

        if (nums[mid] == target )
        {
            ans = mid  ;
            e= mid - 1;
        }

        else if (nums[mid] < target){

            s = mid +1;
        }

        else {
            e= mid - 1 ;
        }

        mid = s+ (e-s)/2;
        
    }
    return ans ;
}

int lastocc(int nums[], int n, int target){

    int s= 0 , e= n-1; 
    int mid = s+ (e-s)/2 ;
    int ans = -1 ;

    while(s<= e){

        if (nums[mid] == target )
        {
            ans = mid  ;
            s= mid + 1;
        }

        else if (nums[mid] < target){

            s = mid +1;
        }

        else {
            e= mid - 1 ;
        }

        mid = s+ (e-s)/2;
        
    }
     return ans;
}



int main() {

    int nums[8] = {1,2,2,2,2,4,6,7};

    cout<< "first occurence of 4 "<< firstocc(nums,8,2)<< endl;
    
    cout<< "last occurence of 4 "<< lastocc(nums,8,2)<< endl;

    cout << "total no. of occurence " << (lastocc(nums,8,2) - firstocc(nums,8,2)) + 1 << endl ;

    return 0 ;

}


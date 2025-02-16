#include <iostream>
using namespace std ;

int sqrtinteger (int n ){
        
        int s= 0 ;
        int e= n ;
        int ans = -1 ;
        int mid = s + (e-s)/ 2 ;

        while( s<= e ){
            int sqrt = mid * mid ;
            if( sqrt == n ){

                return mid ;
            }

            else if (sqrt < n ){
                   ans = mid ;
                   s = mid + 1;
            }

            else {
                e= mid - 1;
            }

            mid = s + (e-s)/ 2 ;
        }
        return ans ;

   }

   

   int main() {

        return sqrtinteger(n)
   }
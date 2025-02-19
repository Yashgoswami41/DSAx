#include <iostream>
#include<math.h>
using namespace std;

int getmin(int num[] , int n ) 
{
    int mini = INT_MAX ;
    for (int i = 0; i <n; i++)
    {
        mini = min(mini , num[i]);
    }
    return mini ; 
}


int main (){

    int size ;

    cin >> size;

    int num[100];

    for (int i = 0; i < size ; i++)
    {
       cin >> num[i];
    }
    return 0 ;
}    
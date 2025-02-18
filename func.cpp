#include <iostream>
using namespace std;

int ans = 1;
int power ( int num1 , int num2)
{

    for (int i = 1; i < num2; i++)
    {
        ans = ans * num1 ;
    }
    return ans;
}

int main (){
    int a, b ; 
    cin >> a  >> b ;

    int answer = power(a ,b);

    cout << "ansswer is "<< answer << endl ;
    return 0 ;
}
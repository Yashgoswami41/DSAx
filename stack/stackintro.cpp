#include<iostream>
#include<Stack>
using namespace std;

int main(){

    stack<int> s ;

    s.push(2);
    s.push(3);
    

    
    


    cout << "printing element " << s.top() << endl;

    if( s.empty()){

        cout << "is empty " << endl ;

    }
    else{
        cout << "not empty" << endl;
    }

    cout << "size of stack" << s.size() << endl;


    return 0;
}
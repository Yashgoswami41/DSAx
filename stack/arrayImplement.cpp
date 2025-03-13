#include <iostream>  // For input/output operations 
using namespace std; 

struct mystack 
{ 
    int *arr; 
    int cap; 
    int top; 

    mystack(int c) 
    {     cap = c; 
          arr = new int[cap]; 
          top = -1; 
    } 
    void push(int x) 
    { 
        if (top == cap - 1) 

        { 

            cout << "Stack Overflow" << endl; 

            return; 

        } 

        top++; 

        arr[top] = x; 

    } 

 

    int pop() 

    { 

        if (top == -1) 

        { 

            cout << "Stack Underflow" << endl; 

            return -1; 

        } 

        int res = arr[top]; 

        top--; 

        return res; 

    } 

 

    int peek() 

    { 

        if (top == -1) 

        { 

            cout << "Stack is Empty" << endl; 

            return -1; 

        } 

        return arr[top]; 

    } 

 

    int size() 

    { 

        return (top + 1); 

    } 

 

    bool isEmpty() 

    { 

        return (top == -1); 

    } 

 

    ~mystack() 

    { 

        delete[] arr;  // Free allocated memory 

    } 

}; // End of structure mystack 

 

int main() 

{ 

    mystack A(5);  // Creating a stack of capacity 5 

 

    // Pushing elements onto the stack 

    A.push(5); 

    A.push(10); 

    A.push(20); 

 

    // Performing stack operations 

    cout << "Popped element: " << A.pop() << endl;  //  print 20 

    cout << "Stack size: " << A.size() << endl;    //  print 2 

    cout << "Top element: " << A.peek() << endl;   //  print 10 

    cout << "Is stack empty? " << (A.isEmpty() ? "Yes" : "No") << endl;  //  print No 

 

    return 0; 

} 
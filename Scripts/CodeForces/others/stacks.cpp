#include<iostream>
#include<stack>

using namespace std;

int main(){
    //Declaration
    stack<string> books;

    //Insertion
    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("Ruby");

    while(!books.empty()){
        cout << books.top() << endl;
        books.pop();// Remove the element at the top of the stack
    }

}
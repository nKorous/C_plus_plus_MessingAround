#include <iostream>
using namespace std;

/***
 *  Just testing to see what the compiler does.
 ***/

int main(){
    string justTesting = "Hello";
    int someNum = 0;
    string myName = "";
    
    /*** input and output var ***/
    cout << "Welcome, please tell me your name: ";
    cin >> myName;

    cout << justTesting << " " << myName << "." << endl;
    cout << "It is a pleasure to meet you." << endl;
    cout << "Please entere a number: ";
    cin >> someNum;
    cout << endl << "You entered " << someNum << endl;

    if(someNum == 42){
        cout << someNum << " is the answer to life, the universe, and everything in it." << endl;
    }
    else if(someNum > 0 && someNum < 10){
        cout << "Your number is between 0 and 10" << endl;
    } else {
        cout << "Your number was either greater than 10, or less than 0" << endl;
    }

    return 0;
}
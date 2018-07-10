#include <iostream>
using namespace std;

/***
 *  Just testing to see what the compiler does.
 ***/

int main(){
    string justTesting = "Hello";
    int someNum = 0;
    string myName = "";
    bool muffinAnswer;
    
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

    if(myName == "Error"){
        cout << "Wait...... Your name is Error?" << endl;
        cout << "Do you know the muffin man? (Enter 1 for Yes or 0 for No) ";
        cin >> muffinAnswer;

        if(muffinAnswer){
            cout << endl;
            cout << "I knew you knew him!! Well i'll be.." << endl;
        } else if(!muffinAnswer){
            cout << endl;
            cout << "Oh... well... he lives on Dreary Ln." << endl;
        }
    }

    return 0;
}
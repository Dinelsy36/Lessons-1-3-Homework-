#include <iostream>

using namespace std;

int main(){
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    if (number > 0){
        cout << "The number is positive and ";
    }else if (number < 0){
        cout << "The number is negative and: ";
    }else {
        cout << "The number is zero and ";
    }
    
    if (number % 2 == 0){
        cout << "even." << endl;
    }else {
        cout << "odd." << endl;
    }

    return 0;
}
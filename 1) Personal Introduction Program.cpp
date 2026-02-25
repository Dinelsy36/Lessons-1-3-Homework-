#include <iostream>

using namespace std;

int main(){
    // Use string to declare variables.
    
    string firstName("Dinelsy");
    string lastName("Sanchez");
    string major("Computer Science");
    string gradYear;
    
    cout << "Enter your expected graduation year: ";
    cin >> gradYear;
    
    cout << endl;
    // Print output.
    cout << "Welcome, " << firstName << " " << lastName << "!" << endl;
    cout << "Major: " << major << endl;
    cout << "Expected Graduation Year: " << gradYear << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    double balance;
    double withdrawal;
    
    //Ask user for account balance
    cout << "Enter account balance: ";
    cin >> balance;
    
    //Ask user for withdrawal amount
    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;
    
    //See withdrawal amount exceeds account balance if not substract
    if (withdrawal > balance){
        cout << "Insufficent funds." << endl;
    } else{
        balance = balance - withdrawal;
        cout << "New balance: " << balance << endl;
    }

    return 0;
}
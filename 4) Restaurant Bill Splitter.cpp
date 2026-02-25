#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double billAmount;
    double tipPercent;
    int numberOfPeople;
    
    cout << "Enter total bill amount: ";
    cin >> billAmount;
    
    cout << "Enter tip percentage: ";
    cin >> tipPercent;
    
    cout << "Enter number of people: ";
    cin >> numberOfPeople;
    
    double tipAmount = billAmount * (tipPercent/100);
    double totalBill = billAmount + tipAmount;
    double amountPerPerson = totalBill / numberOfPeople;
    
    cout << fixed << setprecision(2) << endl;
    
    cout << "Tip Amount: " << tipAmount << endl;
    cout << "Total Bill: " << totalBill << endl;
    cout << "Amount per person: " << amountPerPerson << endl;

    return 0;
}
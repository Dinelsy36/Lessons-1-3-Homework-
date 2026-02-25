#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double grade1;
    double grade2;
    double grade3;
    
    cout << "Enter three course grades: ";
    cin >> grade1 >> grade2 >> grade3;
    
    double sum = grade1 + grade2 + grade3;
    
    double average = sum/3.0;
    
    cout << fixed << setprecision(2);
    
    cout << "Average GPA: " << average << endl;

    return 0;
}
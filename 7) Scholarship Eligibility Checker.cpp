#include <iostream>
using namespace std;

int main(){
    double gpa;
    int sat;
    int volunteerHours;
    
    cout << "Enter GPA: ";
    cin >> gpa;
    
    cout << "Enter SAT score: ";
    cin >> sat;
    
    cout << "Enter volunteer hours: ";
    cin >> volunteerHours;
    
    if (gpa >= 3.5 && sat >= 1200 || gpa >= 3.8 && volunteerHours >= 100){
        cout << "Student qualifies for scholarship." << endl;
    }else{
        cout << "Student does not qualify." << endl;
    }

    return 0;
}